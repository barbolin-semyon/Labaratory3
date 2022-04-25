#include <iostream>
#include "combinations/airplane/Airplane.h"
#include "combinations/modernOrnitopter/ModernOrnitopter.h"

int main() {
    system("chcp 65001");

    cout << "----------" << endl;
    cout << "Самолет" << endl;
    cout << "----------" << endl;

    Airplane airplane(30, 20, 19, true, 2, "green");
    airplane.changeOfOwnership(2);
    airplane.clearToilet();
    airplane.replacementPaddlePropeller();
    airplane.clearJetNozzle();
    static_cast<AircraftWithPaddlePropeller&>( airplane ).run();

    cout << endl;
    cout << "----------" << endl;
    cout << "Современный орнитоптер" << endl;
    cout << "----------" << endl;

    ModernOrnitopter modernOrnitopter(1, 100, 20, 15, 5, "blue");
    modernOrnitopter.accelerate();
    modernOrnitopter.fly();
    modernOrnitopter.clearJetNozzle();
    modernOrnitopter.lubricationWing();
    modernOrnitopter.checkTemperature();

    return 0;
}
