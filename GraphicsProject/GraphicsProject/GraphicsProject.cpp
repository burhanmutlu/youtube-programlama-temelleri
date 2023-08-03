#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "Graphics.h"
#include <conio.h>

using namespace std;


int main()
{
	Window* w = new Window();
	Circle* c = new Circle();
	Time* t = new Time();
	Debug* d = new Debug();

	Point* p = new Point(0, 0);
	Point* dizi[60000];
	int arttirmaSayisi = 30;
	int dx;
	int dy;
	dx = arttirmaSayisi;
	dy = arttirmaSayisi;
	char tus = '\0';
	int ct = 0;
	while (true) {

		if (_kbhit()) {
			tus = (char)_getch();
			if (tus == 'w') {
				dx = arttirmaSayisi;
				dy = arttirmaSayisi;
				dy *= (dy < 0) ? 1 : -1;
				dx = 0;
			}
			if (tus == 'a') {
				dx = arttirmaSayisi;
				dy = arttirmaSayisi;
				dx *= (dx < 0) ? 1 : -1;
				dy = 0;
			}
			if (tus == 's') {
				dx = arttirmaSayisi;
				dy = arttirmaSayisi;
				dy *= (dy < 0) ? -1 : 1;
				dx = 0;
			}
			if (tus == 'd') {
				dx = arttirmaSayisi;
				dy = arttirmaSayisi;
				dx *= (dx < 0) ? -1 : 1;
				dy = 0;
			}
		}
	

		if (ct == 0) {
			for (int k = 0; k < 4; k++) {
				p->x += dx;
				p->y += dy;
				c->setColor(RGB(0, 0, 255));
				c->fillCircle(p, 35);
				c->setColor(RGB(0, 0, 0));
				c->fillCircle(p, 17);
				ct = ct + 1;
			}
		}
		else {
			p->x = p->x + dx;
			p->y = p->y + dy;
			c->setColor(RGB(0, 0, 255));
			c->fillCircle(p, 35);
			c->setColor(RGB(0, 0, 0));
			c->fillCircle(p, 17);
		}
		
		dizi[ct] = new Point(p->x, p->y);
		ct = ct + 1;

		if (ct % 4 == 0 && ct != 0) {
			int i;
			for (i = ct-4; i < ct; i++) {
				c->setColor(RGB(14, 14, 14));
				c->fillCircle(dizi[i], 35);
			}
			c->setColor(RGB(0, 0, 255));
			c->fillCircle(dizi[i-1], 35);
			c->setColor(RGB(0, 0, 0));
			c->fillCircle(dizi[i-1], 17);

		}
		
		Sleep(100);
	}

	

	w->~Window();

	return 0;
}
