import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from fleet_management_system.action import FleetManagement

class FleetManagementActionClient(Node):

    def __init__(self):
        super().__init__('fleet_management_action_client')
        self._action_client = ActionClient(self, FleetManagement, 'fleet_management')

    def send_goal(self, fleet_size):
        goal_msg = FleetManagement.Goal()
        goal_msg.fleet_size = fleet_size
        self._action_client.wait_for_server()
        self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback,
            goal_response_callback=self.goal_response_callback,
            result_callback=self.result_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.vehicle_routes))
        def feedback_callback(self, feedback_msg):
            feedback = feedback_msg.feedback
            self.get_logger().info('Received feedback: {0}'.format(feedback.completion_percentage))

def main(args=None):
    rclpy.init(args=args)

    fleet_management_action_client = FleetManagementActionClient()
    fleet_management_action_client.send_goal(10)  # Replace with your actual fleet size.

    rclpy.spin(fleet_management_action_client)

    fleet_management_action_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
