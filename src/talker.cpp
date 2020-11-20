#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv){
	// Initiating ROS1 infrastructure and talker node
	ros::init(argc, argv, "talker");
	// The node itself
	ros::NodeHandle n;
	// A transmitter that creates the topic chatter
	ros::Publisher chatter = n.advertise<std_msgs::String>("chatter", 1000);
	// Loop rate at 10 Hz
	ros::Rate loop_rate(10);

	// Confirming that ROS didn't shut down
	while(ros::ok()){
    	// Word string data for transmission
		std_msgs::String msg;
		msg.data = "Hello World!";

		ROS_INFO("%s", msg.data.c_str());

		// Transmitting the data 10 times in 1 sec. (10 Hz)
		chatter.publish(msg);
		// Executing the node process cycle once
		ros::spinOnce();
		// Wait to adjust the loop rate to be 10 Hz
		loop_rate.sleep();
	}

	return 0;
}
