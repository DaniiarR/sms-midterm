// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_management_system:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef FLEET_MANAGEMENT_SYSTEM__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
#define FLEET_MANAGEMENT_SYSTEM__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_

#include "fleet_management_system/action/detail/fleet_management__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Goal_fleet_size
{
public:
  Init_FleetManagement_Goal_fleet_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management_system::action::FleetManagement_Goal fleet_size(::fleet_management_system::action::FleetManagement_Goal::_fleet_size_type arg)
  {
    msg_.fleet_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_Goal>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_Goal_fleet_size();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Result_vehicle_routes
{
public:
  Init_FleetManagement_Result_vehicle_routes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management_system::action::FleetManagement_Result vehicle_routes(::fleet_management_system::action::FleetManagement_Result::_vehicle_routes_type arg)
  {
    msg_.vehicle_routes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_Result>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_Result_vehicle_routes();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Feedback_completion_percentage
{
public:
  Init_FleetManagement_Feedback_completion_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management_system::action::FleetManagement_Feedback completion_percentage(::fleet_management_system::action::FleetManagement_Feedback::_completion_percentage_type arg)
  {
    msg_.completion_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_Feedback>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_Feedback_completion_percentage();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Request_goal
{
public:
  explicit Init_FleetManagement_SendGoal_Request_goal(::fleet_management_system::action::FleetManagement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::fleet_management_system::action::FleetManagement_SendGoal_Request goal(::fleet_management_system::action::FleetManagement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_SendGoal_Request msg_;
};

class Init_FleetManagement_SendGoal_Request_goal_id
{
public:
  Init_FleetManagement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Request_goal goal_id(::fleet_management_system::action::FleetManagement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_SendGoal_Request_goal(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_SendGoal_Request>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_SendGoal_Request_goal_id();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Response_stamp
{
public:
  explicit Init_FleetManagement_SendGoal_Response_stamp(::fleet_management_system::action::FleetManagement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::fleet_management_system::action::FleetManagement_SendGoal_Response stamp(::fleet_management_system::action::FleetManagement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_SendGoal_Response msg_;
};

class Init_FleetManagement_SendGoal_Response_accepted
{
public:
  Init_FleetManagement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Response_stamp accepted(::fleet_management_system::action::FleetManagement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FleetManagement_SendGoal_Response_stamp(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_SendGoal_Response>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_SendGoal_Response_accepted();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Request_goal_id
{
public:
  Init_FleetManagement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleet_management_system::action::FleetManagement_GetResult_Request goal_id(::fleet_management_system::action::FleetManagement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_GetResult_Request>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_GetResult_Request_goal_id();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Response_result
{
public:
  explicit Init_FleetManagement_GetResult_Response_result(::fleet_management_system::action::FleetManagement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::fleet_management_system::action::FleetManagement_GetResult_Response result(::fleet_management_system::action::FleetManagement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_GetResult_Response msg_;
};

class Init_FleetManagement_GetResult_Response_status
{
public:
  Init_FleetManagement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_GetResult_Response_result status(::fleet_management_system::action::FleetManagement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FleetManagement_GetResult_Response_result(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_GetResult_Response>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_GetResult_Response_status();
}

}  // namespace fleet_management_system


namespace fleet_management_system
{

namespace action
{

namespace builder
{

class Init_FleetManagement_FeedbackMessage_feedback
{
public:
  explicit Init_FleetManagement_FeedbackMessage_feedback(::fleet_management_system::action::FleetManagement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::fleet_management_system::action::FleetManagement_FeedbackMessage feedback(::fleet_management_system::action::FleetManagement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_FeedbackMessage msg_;
};

class Init_FleetManagement_FeedbackMessage_goal_id
{
public:
  Init_FleetManagement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_FeedbackMessage_feedback goal_id(::fleet_management_system::action::FleetManagement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_FeedbackMessage_feedback(msg_);
  }

private:
  ::fleet_management_system::action::FleetManagement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_management_system::action::FleetManagement_FeedbackMessage>()
{
  return fleet_management_system::action::builder::Init_FleetManagement_FeedbackMessage_goal_id();
}

}  // namespace fleet_management_system

#endif  // FLEET_MANAGEMENT_SYSTEM__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
