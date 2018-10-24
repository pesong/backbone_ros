//
// Created by pesong on 18-10-24.
//
#include "SSD_Detector.hpp"

int main(int argc, char *argv[]) {
//
    ros::init(argc, argv, "backbone");
//    NodeHandle 获取句柄文件，～ 是指当前目录
    ros::NodeHandle nh, priv_nh("~");

    ssd_ros::SSD_Detector ssd_Detector(priv_nh);
    ros::spin();
}