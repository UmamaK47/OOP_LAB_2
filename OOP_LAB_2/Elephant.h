#pragma once
#include "Animal.h"
using namespace std;
class Elephant :
    public Animal
{
    string makeSound() const override {
        return "Elephant toots";
    }
};

