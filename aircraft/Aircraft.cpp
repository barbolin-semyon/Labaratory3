
#include "Aircraft.h"


void Aircraft::assemblyAPart() {
    cout << "Сборка летательного аппарата прошла успешна" << endl;
}

void Aircraft::takeAPart() {
    cout << "Разборка летательного аппарата прошла успешна" << endl;
}

void Aircraft::changeColor(string newColor) {
    color = newColor;
}

Aircraft::Aircraft(int age, string color): age(age), color(color) {}
