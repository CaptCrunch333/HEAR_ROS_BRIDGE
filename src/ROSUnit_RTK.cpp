#include "HEAR_ROS_BRIDGE/ROSUnit_RTK.hpp"
// ROSUnit_RTK* ROSUnit_RTK::_instance_ptr = NULL;

// ROSUnit_RTK::ROSUnit_RTK(ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler) {
//     _sub_fix = t_main_handler.subscribe("/tcpfix", 1, callbackRTK1);
//     _sub_vel = t_main_handler.subscribe("/tcpvel", 1, callbackRTK2);
//     _instance_ptr = this;
// }

// ROSUnit_RTK::~ROSUnit_RTK() {

// }

// void ROSUnit_RTK::callbackRTK1(const sensor_msgs::NavSatFix::ConstPtr & msg) {
    
//     Vector3DMsg position_msg;
//     Vector3D<double> pos_data;
//     pos_data.x = msg->latitude;
//     pos_data.y = msg->longitude;
//     pos_data.z = msg->altitude;

//     position_msg.setVector3DMsg(pos_data);
// }


// void ROSUnit_RTK::callbackRTK2(const geometry_msgs::TwistStamped::ConstPtr& msg){
    
//     Vector3DMsg velocity_msg;
//     Vector3D<double> vel_data;
//     vel_data.x = msg->twist.linear.x;
//     vel_data.y = msg->twist.linear.y;
//     vel_data.z = msg->twist.linear.z;

//     velocity_msg.setVector3DMsg(vel_data);
// }