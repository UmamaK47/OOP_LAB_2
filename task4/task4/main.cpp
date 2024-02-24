#include<iostream>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"
using namespace std;
int main()
{
	Flower flower(10);
	Tree tree(30);
	Bush bush(15);
	for (int i = 0; i < 30; i++) {
		flower.grow();
	}
	for (int i = 0; i < 30; i++) {
		tree.grow();
	}
	for (int i = 0; i < 30; i++) {
		bush.grow();
	}
	flower.displayHeight();
	tree.displayHeight();
	bush.displayHeight();
	return 0;
}