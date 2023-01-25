#include "Circle.h"

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::size()
{
	answer = sizeCircle * PI;
}

void Circle::draw()
{
	printf("circle‚Ì“š‚¦‚Í%f\n", answer);
}
