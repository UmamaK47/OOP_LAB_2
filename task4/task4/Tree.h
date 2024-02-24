#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Tree :
    public Plant
{
private:
    float height; // in centimeters
    float growthRate; // cm per day
public:
    Tree(float initialHeight) : height(initialHeight), growthRate(0.2) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() override {
        cout << "Tree height: " << height << " cm" << endl;
    }
};

