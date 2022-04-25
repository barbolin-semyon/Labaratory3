//
// Created by syoma on 14.04.2022.
//

#include "ModernOrnitopter.h"

void ModernOrnitopter::fly() {
    FlappingWing::run();
}

void ModernOrnitopter::accelerate() {
    AircraftWithJetNozzle::run();
}

ModernOrnitopter::ModernOrnitopter(
        int version,
        int lengthWing,
        int dateLastClear,
        int temperature,
        int age, string color):
        version(version),
        FlappingWing(lengthWing, age, color),
        AircraftWithJetNozzle(dateLastClear,temperature, age, color)
        {}
