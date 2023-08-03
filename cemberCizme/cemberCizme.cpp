#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;

#define M_PI 3.141592653589793238462643383279502884L 
#define RED RGB(255, 0, 0)
#define BLUE RGB(0, 0, 255)
#define BLACK RGB(0, 0, 0)
#define ADD_PIXEL 10

HWND consoleWindow = GetConsoleWindow();
HDC consoleDC = GetDC(consoleWindow);
HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

struct Color {
	int R;
	int G;
	int B;
};

double radians(int degrees) {
	return (double)(degrees * M_PI) / (180*ADD_PIXEL);
}

void circle(int x, int y, int radius) {
	int X, Y;
	for (int i = 0; i < (360*ADD_PIXEL); i++) {
		X = radius * cos(radians(i));
		Y = radius * sin(radians(i));
		SetPixel(consoleDC, X + x, Y + y, BLUE);
	}
}

void fillCircle(int x, int y, int radius) {
	for (int i = 0; i < radius; i++) {
		circle(x,y,radius-i);
	}	
}

void line(int x1, int y1, int x2, int y2) {
	int X = (x1 > x2) ? x2 : x1;
	int x = (x1 > x2) ? x1 : x2;
	int Y = (y1 > y2) ? y2 : y1;
	int y = (y1 > y2) ? y1 : y2;

	for (X; X <= x; X++) {
		for (Y; Y <= y; Y++) {
			SetPixel(consoleDC, X++, Y, BLUE);
		}
	}
}

void hideCursor() {
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

int getWindowWidth() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(consoleHandle, &csbi);
	int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	return width;
}

int getWindowHeight() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(consoleHandle, &csbi);
	int height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	return height;
}

struct Color getColor(int x, int y) {
	Color c;
	COLORREF color = GetPixel(consoleDC, x, y);
	c.R = (int)GetRValue(color);
	c.G = (int)GetGValue(color);
	c.B = (int)GetBValue(color);
	return c;
}

void printColor(struct Color c) {
	cout << "(" << c.R << ", " << c.G << ", " << c.B << ")" << endl;
}

void clearDevice() {
	for (int y = 0; y < getWindowHeight();y++) {
		cout << endl;
	}
}

int main()
{ 
	

	int x, y;
	hideCursor();

	for (int i = 0; i < 120 * 8; i++) { // 120 karakter * 8px
		for (int j = 0; j < 30*16; j++) {
			SetPixel(consoleDC, i, j, RED);
			logger << i << " " << j << endl;
		}
	}

	fillCircle(300, 300, 80);

	Sleep(1000);

	const clock_t begin_time = clock();
	clearDevice();
	
	//line(200, 100, 200, 300);

	ReleaseDC(consoleWindow, consoleDC);
	cin.ignore();
	return 0;
}


/**
* kbhit() : Klavye arabelleğinde bir anahtar varsa,
   sıfır olmayan bir tamsayı döndürür. Bir tuşa basılmasını beklemeyecektir.
* int c = _getch() -> karakteri bekler. basılan karakterin sayısal değerini döndürür.
* .a(linux) = .lib(windows)
* hızlı düzenleme modunu kapattım
* bir karakterdeki metnin genişliği 8px yüksekliği 16px
*/
