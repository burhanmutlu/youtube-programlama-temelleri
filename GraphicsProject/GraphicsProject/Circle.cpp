#include "Circle.h"
#include <cmath>
#include <Windows.h>

Circle::Circle() {
	w = new Window();
	color = RGB(255, 255, 255);
	addPixel = 1;
}

void Circle::drawCircle(Point* point, int radius) {
	int X, Y;
	for (int i = 0; i < (360 * addPixel); i++) {
		X = radius * cos(radians(i));
		Y = radius * sin(radians(i));
		SetPixel((HDC)w->getconsoleDC(), X + point->x, Y + point->y, color);
	}
}

void Circle::fillCircle(Point* point, int radius) {
	for (int i = 0; i < radius; i++) {
		drawCircle(point, radius-i);
	}
}

double Circle::radians(int degrees) {
	return (double)(degrees * M_PI) / (180 * addPixel);
}

void Circle::setColor(COLORREF color) {
	this->color = color;
}

void Circle::setAddPixel(int addPixel) {
	this->addPixel = addPixel;
}

