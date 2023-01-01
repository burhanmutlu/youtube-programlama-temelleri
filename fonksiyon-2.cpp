#include <iostream>

using namespace std;

/*int sayac = 0;
int recursive() {
	
	cout << sayac++ << ".fonksiyon geldi" << endl;
	if (sayac == 5) {
		return 0;
	}
	
	return recursive();
}*/

/*int sayac2 = 0;
int recursive2() {
	cout << sayac2++ << endl;
}*/


int faktHesapla(int s) {
	static int tp = 0;
	
	static int sonuc = 1;
	cout << "test" << " " << tp++ << endl;
	sonuc = sonuc * s; //5
	cout << "sonuc : " << sonuc << endl;
	if (s > 1) {
		return faktHesapla(s-1);
	}
	
	return sonuc;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}


int main() {
	
	
	/*while(true) 
		recursive2();*/
	//recursive();
	
	//cout << factorial(5) << endl;
	
	cout << faktHesapla(5);
	
	return 0;
}
