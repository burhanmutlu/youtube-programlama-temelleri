#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
	
	 
	/*
		n=4
		38 + 3*n
	*/
	/*int ilk, ikinci =0;
	for (int i=0; i<70; i++) {
		srand (i);
		ilk = rand();
		srand (i + 1);
		ikinci = rand();
		cout << i << " " << ilk << "-" << ikinci-ilk << endl;
	}*/
	
	//cout << time(NULL) << endl; // (int) casting - 
	
	srand (time(0));
	cout << (int)('A');
	
	/*for (int i=0; i<50; i++ ) {
		cout << (char)(rand() % 26 +65) << endl;
	}*/
	
	
	
	return 0;
}
