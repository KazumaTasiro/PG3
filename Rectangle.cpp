#include "Rectangle.h"

Rectangles::Rectangles()
{
}

Rectangles::~Rectangles()
{
}

void Rectangles::size()
{
	answer = widthRectangle * heightRectangle;
}

void Rectangles::draw()
{
	printf("rectangles‚Ì“š‚¦‚Í%d\n", answer);
}
