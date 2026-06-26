#include <basic_cpp_example/simple_robot.h>

SimpleRobot::SimpleRobot(float link_length) : link_length_(link_length)
{
    // initialize ee location to theta = 0
    setJointAngle(0);
}

void SimpleRobot::setJointAngle(float theta)
{
    joint_angle_ = theta;

    ee_location_[0] = link_length_*std::sin(joint_angle_); // x
    ee_location_[1] = link_length_*std::cos(joint_angle_); // y
}

void SimpleRobot::printEELocation()
{
    std::cout << "x: " << ee_location_[0] << " [m] y: " << ee_location_[1] << " [m]" << std::endl;  
}

int main()
{
    // create instance of class with 0.5 meter long robot
    SimpleRobot my_robot(0.5);

    // loop through angles 0 to 360 and print the ee location
    for (int i = 0; i < 360; i++)
    {
        my_robot.setJointAngle(i*M_PI/180.0);
        my_robot.printEELocation();
    }
}
