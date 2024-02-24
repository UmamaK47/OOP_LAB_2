#pragma once
#include "Animal.h"
using namespace std;
class Bird :
    public Animal
{
    string makeSound() const override {
        return "Bird chirps";
    }
};

