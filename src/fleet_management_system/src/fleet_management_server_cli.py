import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from fleet_management_system.action import FleetManagement

class FleetManagementActionServer(Node):

    def __init__(self):
        super().__init__('fleet_management_action_server')
        self._action_server = ActionServer(
            self,
            FleetManagement,
            'FleetManagement',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        fleet_size = goal_handle.request.fleet_size

        # Fleet management logic: assign each vehicle to a route in a round-robin fashion.
        routes = ['route1', 'route2', 'route3', 'route4', 'route5']  # Replace with your actual routes.
        vehicle_routes = [routes[i % len(routes)] for i in range(fleet_size)]

        # Return the result.
        goal_handle.succeed()
        result = FleetManagement.Result()
        result.vehicle_routes = vehicle_routes
        return result

def main(args=None):
    rclpy.init(args=args)

    fleet_management_action_server = FleetManagementActionServer()

    rclpy.spin(fleet_management_action_server)

    fleet_management_action_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
