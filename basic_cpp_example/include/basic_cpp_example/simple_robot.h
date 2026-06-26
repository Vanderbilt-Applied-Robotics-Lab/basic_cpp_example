#ifndef SIMPLE_ROBOT
#define SIMPLE_ROBOT

#include <array>
#include <cmath>
#include <iostream> // for printing

/**
 * Simple example of C++ classes and syntax using a 1 DOF robot 
 * Applied Robotics
 */
class SimpleRobot
{
public:
    /**
     * Constructor
     * @param link_length The length of a the link [m]
     */
    SimpleRobot(float link_length);

    /**
     * Default destructor
     */
    ~SimpleRobot() = default;

    /**
     * Set the joint angle of the robot
     * @param theta joint angle in radians
     */
    void setJointAngle(float theta);

    /**
     * prints the x and y location of the robot's end-effector (EE)
     */
    void printEELocation();

private:
    float link_length_;
    float joint_angle_ = 0;

    std::array<float, 2> ee_location_; // [x,y] We will learn better ways of doing this soon
};
#endif // SIMPLE_ROBOT