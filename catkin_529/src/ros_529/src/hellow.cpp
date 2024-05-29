#include  "ros/ros.h"

// 2.main函数
int main(int argc, char *argv[])
{
	
	// 3.初始化ros节点
	ros::init(argc, argv, "hellowworld");
	// 4.输出日志
	ROS_INFO("hellow world!");
	return 0;
}
