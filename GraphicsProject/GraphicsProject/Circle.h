#pragma once

#include "Point.h"
#include "Window.h"
#define M_PI 3.141592653589793238462643383279502884L 

class Circle {
public:
	Circle();
	void drawCircle(Point* point, int radius);
	void fillCircle(Point* point, int radius);
	void setColor(COLORREF color);
	void setAddPixel(int addPixel);
private:
	Window* w;
	COLORREF color;
	int addPixel;
	double radians(int degrees);
};

