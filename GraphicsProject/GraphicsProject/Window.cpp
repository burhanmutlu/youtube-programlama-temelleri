#include "Window.h"

#include <iostream>

Window::Window() {
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	consoleWindow = GetConsoleWindow();
	consoleDC = GetDC(consoleWindow);
	hideCursor();
}

Window::~Window() {
	ReleaseDC(consoleWindow, consoleDC);
	std::cin.ignore();
}

void Window::hideCursor() {
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

HDC Window::getconsoleDC() {
	return consoleDC;
}


int Window::getWindowWidth() {
	GetConsoleScreenBufferInfo(consoleHandle, &csbi);
	width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	return width;
}

int Window::getWindowHeight() {
	GetConsoleScreenBufferInfo(consoleHandle, &csbi);
	height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	return height;
}

void Window::clearDevice() {
	//SetConsoleCursorPosition(consoleHandle, {2000,2000});
}
