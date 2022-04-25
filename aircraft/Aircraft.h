#include "string"
#include "iostream"

#ifndef LABARATORY_3_AIRCRAFT_H
#define LABARATORY_3_AIRCRAFT_H

using namespace std;

class Aircraft {

protected:
    int age;
    string color;

public:
    Aircraft(int age, string color);
    void takeAPart();
    void assemblyAPart();
    virtual void run() = 0;

    void changeColor(string newColor);
};

#endif
