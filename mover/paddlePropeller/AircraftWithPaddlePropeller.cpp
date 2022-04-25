//
// Created by syoma on 24.03.2022.
//



#include "AircraftWithPaddlePropeller.h"

void AircraftWithPaddlePropeller::run() {
    cout << "Винт начал вращательное движение" << endl;
}

void AircraftWithPaddlePropeller::replacementPaddlePropeller() {
    takeAPart();
    cout << "Транспортировка старого винта и доставка со склада нового прошла успешна";
    assemblyAPart();
}

void AircraftWithPaddlePropeller::reverse() {
    direction = not direction;

    if (direction) {
        cout << "Смена направления вращения. Новое направление: По часовой стрелке" << endl;
    } else {
        cout << "Смена направления вращения. Новое направление: Против часовой стрелке" << endl;
    }
}

AircraftWithPaddlePropeller::AircraftWithPaddlePropeller(
        bool direction,
        int age,
        string color
        ): direction(direction), Aircraft(age, color) {}
