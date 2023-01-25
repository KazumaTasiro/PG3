#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include"windows.h"
#include"Rectangle.h"
#include"Circle.h"
using namespace std;



int main() {
	Circle* circle = new Circle;
	Rectangles* rectangles = new Rectangles;

	circle->size();
	circle->draw();

	rectangles->size();
	rectangles->draw();

	return 0;
}