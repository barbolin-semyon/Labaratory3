#include "Airplane.h"


void Airplane::changeOfOwnership(int ownership) {
        switch (ownership) {
        case 0: AircraftWithJetNozzle::changeColor("green"); break;
        case 1: AircraftWithJetNozzle::changeColor("red"); break;
        case 2: AircraftWithJetNozzle::changeColor("blue"); break;
        case 3: AircraftWithJetNozzle::changeColor("yellow"); break;
    }
}

void Airplane::clearToilet() {
    dateLastClearToilet++;
    cout << "Чистка туалета прошла успешна" << endl;
}

Airplane::Airplane(
        int dateLastClearToilet,
        int dateLastClearJetNozzle,
        int temperature,
        bool directionPaddlePropeller,
        int age, string color
        )
        : dateLastClearToilet(dateLastClearToilet),
        AircraftWithJetNozzle(dateLastClearJetNozzle, temperature, age, color),
          AircraftWithPaddlePropeller(directionPaddlePropeller, age, color)
        {}
