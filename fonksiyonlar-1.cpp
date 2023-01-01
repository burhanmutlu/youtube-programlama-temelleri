#include <iostream>

using namespace std;


void selamla() {
	cout << "selam" << endl;
	return 0;
}

int toplama(int s1, int s2) {
	return s1 + s2;
}

string sonunaEkleme(string ilkDeger, string ikinciDeger) {
	string tp = ilkDeger + ikinciDeger;
	return tp;
}

void gulegule();


int main() {
	
	// selamla();

	/*
	int toplamDeger = toplama(2, 5);
	
	cout << "ilk deger: " << toplamDeger << "\n" ; // 7
	
	toplamDeger = toplamDeger - 2;
	
	cout << "son deger: " << toplamDeger << "\n" ; //5
	*/
	
	cout << sonunaEkleme("burhan", " mutlu") << endl;
	
	gulegule();	
	
	return 0;
}


void gulegule() {
	cout << "gule gule " << endl;
}




