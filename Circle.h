#pragma once
#include "IShape.h"
#include <stdio.h>

class Circle:public ISape
{
public:
	Circle();
	~Circle();

	void size()override;
	void draw()override;

private:

	float sizeCircle = 10;
	float PI = 3.14;
	float answer = 0;
};