# Dynamic Fleet Management System

This project implements a dynamic fleet management system using ROS2 (Robot Operating System 2) in Python. The project aims to efficiently allocate and route vehicles in a smart mobility service. 

# Overview

Fleet management refers to the coordination and communication system among various robotic devices to enhance operational efficiency and scalability. It involves a wide range of activities related to the maintenance and operation of robots. Unlike traditional fleet management involving human-controlled vehicles, robot fleet management involves robots performing tasks autonomously. The complexity arises from the need for robots to interact accurately and efficiently with their environment during these tasks.

## Project set up

### Prerequisites:

1. **Install ROS2:**
   Make sure you have ROS2 installed on your system. You can follow the official [ROS2 installation instructions](https://index.ros.org/doc/ros2/Installation/) for your specific operating system.

2. **Create a ROS2 Workspace:**
   Create a new ROS2 workspace if you haven't already. You can do this by following the ROS2 tutorials or using the following command:
   ```bash
   mkdir -p ~/ros2_workspace/src
   cd ~/ros2_workspace
   colcon build
   source install/setup.bash

### Steps to Run the Downloaded ROS2 Project:

1. **Clone the Repository:**
   Clone the GitHub repository that contains the ROS2 project to your local machine using Git:
   ```bash
   git clone <repository_url>

2. **Build the workspace:**
	Build the ROS2 workspace to compile the downloaded project and its dependencies.
	```bash
	cd ~/ros2_workspace colcon build
3. **Source the workspace:**
	Source the workspace to set up the environment variables. This step needs to be done in every new terminal where you intend to work with the ROS2 project.
	```bash
	source install/setup.bash
4. **Run the ROS2 nodes:**
	1. **Run the action server:**
	```bash
	python3 fleet_management_server_cli.py
	```
	<img width="900" alt="Screenshot 2023-10-26 at 9 36 21 PM" src="https://github.com/DaniiarR/sms-midterm/assets/27438809/16521ff2-3d8c-4fd8-812b-e29a0b98d512">

	  2. **Run the action client (in another terminal window):**
		
		ros2 action send_goal FleetManagement fleet_management_system/action/FleetManagement "{fleet_size: 5}"

    <img width="1191" alt="image" src="https://github.com/DaniiarR/sms-midterm/assets/27438809/44aa9493-09ae-4025-b6dd-697e10caeafd">

		
		
