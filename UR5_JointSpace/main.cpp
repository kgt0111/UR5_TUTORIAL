#include <ur_rtde/rtde_control_interface.h>
#include <ur_rtde/rtde_receive_interface.h>
#include <iostream> // only needed for the printout
#include <thread> // only needed for the delay
using namespace ur_rtde;

int main(int argc, char* argv[])
{
  RTDEControlInterface rtde_control("192.168.10.101");
  double velocity = 0.2;
  double acceleration = 1.2;
  double blend1 = 0;
  double blend2 = 0.3;
  double blend3 = 0;
  RTDEReceiveInterface rtde_receive("192.168.10.101");
  std::vector<double> joint_positions = rtde_receive.getActualQ();
  std::cout << std::endl << joint_positions[0]<<"  " << joint_positions[1]<<"  "<< joint_positions[2]<<"  "<< joint_positions[3]<<"  " << joint_positions[4]<<"  " << joint_positions[5]<< std::endl << std::endl;
  std::vector<std::vector<double>> path;
  std::vector<double> pose4 = {-0.366662,  -1.2404,  0.206715,  -1.60517,  -0.759148,  0.00387192, velocity, acceleration, blend1};
  path.push_back(pose4);
  std::vector<double> pose5 = {-0.5,  -1.2404,  0.206715,  -1.60517,  -0.759148,  0.00387192, velocity, acceleration, blend1};
  path.push_back(pose5);
  std::vector<double> pose6 = {-0.7,  -1.5,  0.206715,  -1.60517,  -0.759148,  0.00387192, velocity, acceleration, blend1};
  path.push_back(pose6);
  
  rtde_control.moveJ(path);

}
