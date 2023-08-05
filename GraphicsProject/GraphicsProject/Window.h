#pragma once

#include <Windows.h>



class Window {
public:
	Window();
	~Window();
	void hideCursor();
	int getWindowWidth();
	int getWindowHeight();
	HDC getconsoleDC();
	void setBgColor(COLORREF bgColor);
	COLORREF getBgColor();
	void clearDevice();
	void funmap();
private:
	HWND consoleWindow;
	HDC consoleDC;
	HANDLE consoleHandle;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int width;
	int height;
	COLORREF bgColor;
};



