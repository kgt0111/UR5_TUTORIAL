# UR5_TUTORIAL

follow under code

--------------------------------------------------------------------
```bash

sudo apt-get install libboost-all-dev
sudo apt install git
sudo apt install cmake
mkdir code
cd code
git clone https://gitlab.com/sdurobotics/ur_rtde.git
cd ur_rtde
git submodule update --init --recursive
cmake -DPYTHON_BINDINGS:BOOL=OFF ..
make
sudo make install
cd ~/
git clone https://github.com/kgt0111/UR5_TUTORIAL.git
cd UR5_TUTORIAL/UR5_JointSpace
mkdir build
cd build
cmake  ..
make
./ur_rtde_cmake_example

cd ~/UR5_TUTORIAL/UR5_TaskSpace
mkdir build
cd build
cmake  ..
make
./ur_rtde_cmake_example
```
