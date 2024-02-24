#pragma once
#include "Animal.h"
using namespace std;
class Monkey :
    public Animal
{
    string makeSound() const override {
        return "Monkey screams";
    }
};

