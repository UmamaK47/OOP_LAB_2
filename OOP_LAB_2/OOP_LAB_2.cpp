#include <iostream>
#include"Animal.h"
#include"Lion.h"
#include"Elephant.h"
#include"Monkey.h"
#include "Bird.h"
using namespace std;

void hearSound(const Animal& animal) {
    cout<< animal.makeSound();
}
int main() {
    Lion lion;
    Elephant elephant;
    Monkey monkey;
    Bird bird;
    hearSound(lion);
    hearSound(elephant);
    hearSound(monkey);
    hearSound(bird);
    return 0;
}
