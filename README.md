# basic_cpp_example
In-class example of basic C++ classes and syntax.
Uses a simple 1-DOF robot as an example.

## Downloading Code
1. Create an examples workspace: `mkdir -p ~/workspaces/examples_ws/src`
2. Navigate to source folder: `cd ~/workspaces/examples_ws/src`
3. Download code: `git clone https://github.com/Vanderbilt-Applied-Robotics-Lab/basic_cpp_example.git`

## Compiling Code
1. Navigate to examples workspace: `cd ~/workspaces/examples_ws`
2. Compile the code: `colcon build`

## Running Code
1. Navigate to examples workspace: `cd ~/workspaces/examples_ws`
2. Source the code: `source install/setup.bash`
3. Run: `ros2 run basic_cpp_example simple_robot`