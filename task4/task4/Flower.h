#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Flower :
    public Plant
{
private:
    float height; // in centimeters
    float growthRate; // cm per day
public:
    Flower(float initialHeight) : height(initialHeight), growthRate(0.5) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() override {
        cout << "Flower height: " << height << " cm" << endl;
    }
};

