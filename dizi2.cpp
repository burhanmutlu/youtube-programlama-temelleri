#include <iostream>

using namespace std;

void sifirla(int dizi[9][9]) {
	for (int i=0; i<9; i++ ) {
		for (int j=0; j<9; j++) {
			dizi[i][j] = 0;
		}
	}
}

void bastir(int dizi[9][9]) {
	
	for (int i=0; i<9; i++ ) {
		for (int j=0; j<9; j++) {
			cout << dizi[i][j] << "\t";
		}
		cout << endl;
	}
}

int main() {
	

	int dizi[9][9];
	
	sifirla(dizi);
	
	for (int i=1; i<=9; i++ ) {
		for (int j=1; j<=9; j++) {
			dizi[i-1][j-1] = i * j;
		}
	}
	

	
	bastir(dizi);

	
	return 0;
}
