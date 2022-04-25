//
// Created by syoma on 14.04.2022.
//

#include "FlappingWing.h"

void FlappingWing::lubricationWing() {
    takeAPart();
    cout << "Смазывание деталей крыла прошло успешно" << endl;
    assemblyAPart();
}

void FlappingWing::printLength() {
    cout << "Длина самолета: " << lengthWing << endl;
}

void FlappingWing::run() {
    cout << "Начинаем махи крыльями" << endl;
}

FlappingWing::FlappingWing(
        int lengthWing,
        int age,
        string color
        ): lengthWing(lengthWing), Aircraft(age, color) {}
