//
// Created by syoma on 14.04.2022.
//

#include "AircraftWithJetNozzle.h"

void AircraftWithJetNozzle::run() {
    cout << "Горячие газы выходят наружу" << endl;
}

void AircraftWithJetNozzle::clearJetNozzle() {
    takeAPart();
    dateLastClear++;
    cout << "Чистка деталей реактивного сопла прошла успешна" << endl;
    assemblyAPart();
}

void AircraftWithJetNozzle::checkTemperature() {
    cout << "Температура: " << temperature << endl;
}

AircraftWithJetNozzle::AircraftWithJetNozzle(
        int dateLastClear,
        int temperature,
        int age, string color
        ): dateLastClear(dateLastClear), temperature(temperature), Aircraft(age, color) {
}
