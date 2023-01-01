#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	
	srand(time(NULL));
	
	int Y=20, X=100;
	char farkliDeger;
	char uretilenDeger;
	uretilenDeger = (char) (rand()%255);
	int x = rand() % X;
	int y = rand() % Y;

	char matrix[Y][X];

	for (int i=0; i<Y; i=i+1) {
		for (int j=0; j<X; j++) {
			if (i==y && j==x) {
				matrix[i][j] = uretilenDeger;
			} else {
				matrix[i][j] = 'Z';
			}
			
		}
	}

	for (int i=0; i<Y; i=i+1) {
		for (int j=0; j<X; j++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
	
	cout << "farkli degeri yazin: ";
	cin >> farkliDeger;
	
	if (farkliDeger == uretilenDeger) {
		cout << "tebrikler kazandiniz";
	} else {
		cout << "hatali deger";
	}

	
	
	return 0;
}
