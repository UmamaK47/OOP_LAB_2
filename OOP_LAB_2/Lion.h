#pragma once
#include "Animal.h"
using namespace std;
class Lion :
    public Animal
{
    string makeSound() const override {
        return "Lion Rawrs";
    }
};

