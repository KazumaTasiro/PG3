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
	printf("rectangles�̓�����%d\n", answer);
}
