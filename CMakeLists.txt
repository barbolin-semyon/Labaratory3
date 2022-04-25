cmake_minimum_required(VERSION 3.21)
project(Labaratory_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Labaratory_3 main.cpp aircraft/Aircraft.cpp aircraft/Aircraft.h mover/paddlePropeller/AircraftWithPaddlePropeller.cpp mover/paddlePropeller/AircraftWithPaddlePropeller.h mover/jetNozzle/AircraftWithJetNozzle.cpp mover/jetNozzle/AircraftWithJetNozzle.h mover/flappingWing/FlappingWing.cpp mover/flappingWing/FlappingWing.h combinations/airplane/Airplane.cpp combinations/airplane/Airplane.h combinations/modernOrnitopter/ModernOrnitopter.cpp combinations/modernOrnitopter/ModernOrnitopter.h)
