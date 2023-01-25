#pragma once
#include "IShape.h"
#include <stdio.h>

class Rectangles:public ISape
{
public:
	Rectangles();
	~Rectangles();

	void size()override;
	void draw()override;
private:
	int widthRectangle = 10;
	int heightRectangle = 20;
	int answer = 0;

};