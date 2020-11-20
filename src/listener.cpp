 #include <ros/ros.h>
 #include <std_msgs/String.h>

 // Call back function for the topic chatter
 void callback(const std_msgs::String::ConstPtr& msg){
 	ROS_INFO("%s", msg->data.c_str());
 }

 int main(int argc, char **argv){
	// Initiating ROS1 infrastructure and listener node
 	ros::init(argc, argv, "listener");
	// The node itself
	ros::NodeHandle n;

	// Configuring the receiver for topic chatter
	ros::Subscriber chatter = n.subscribe("chatter", 1000, callback);
	// Start the node process cycle
	ros::spin();

	return 0;
 }
