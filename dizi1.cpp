#include <iostream>

using namespace std;

int main() {
	
	
	int dizi[7]; // tek boyutlu

	char dizi2[3] = {'a', 'b', 'c'};
	
	string dizi3[2] = {"burhan", "mutlu"};
	
	cout << dizi3[0] << " " << dizi3[1];
	
	
	for (int i=0; i<7; i++) {
		dizi[i] = i * 5;
	}
	
	
	for (int i=0; i<7; i++) {
		cout << dizi[i] * 2 << endl;
	}
	
	
	return 0;
}
