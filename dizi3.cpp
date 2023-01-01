#include <iostream>

using namespace std;

int main() {
	

	char dizi[8][8];	
	
	
	for (int y=0; y<8; y++) {
		for (int x=0; x<8; x++) {
			if( (y==0 || y==7) || (x==0 || x==7) ) {
				dizi[y][x] = '*';
			} else {
				dizi[y][x] = ' ';
			}
			
		}
	}

	for (int i=0; i<8; i++) {
		for (int j=0; j<8; j++) {
			cout << dizi[i][j] << " ";
		}
		cout << endl;
	}




	
	
	return 0;
}
