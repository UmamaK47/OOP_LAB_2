#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Bush :
    public Plant
{
private:
    float height; // in centimeters
    float growthRate; // cm per day
public:
    Bush(float initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() override {
        cout << "Bush height: " << height << " cm" << endl;
    }
};

