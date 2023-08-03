/** hareket eden çember
		 
	
	Window* w = new Window();
	Circle* c = new Circle();

	Point* p = new Point(0, 0);
	int arttirmaSayisi = 5;
	int dx = arttirmaSayisi;
	int dy = arttirmaSayisi;
	while (true) {

		p->x = p->x + dx;
		p->y = p->y + dy;
		c->setColor(RGB(255, 0, 0));
		c->drawCircle(p, 20);
		Sleep(1000 / 60);
		c->setColor(RGB(14, 14, 14));
		c->drawCircle(p, 20);
		//w->clearDevice();
		if (p->x >= (w->getWindowWidth() * 8) || p->x < 0) {
			// sola dön
			dx *= -1;
		}
		if (p->y >= (w->getWindowHeight() * 16) || p->y < 0) {
			// yukarý çýk
			dy *= -1;
		}
	}

	w->~Window();
*/
