#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "Graphics.h"
#include <conio.h>

using namespace std;


int main()
{
	Window* w = new Window();
	Time* t = new Time();
	Debug* d = new Debug();
	Circle* c = new Circle();

	w->funmap();

	



	w->~Window();

	return 0;
}
