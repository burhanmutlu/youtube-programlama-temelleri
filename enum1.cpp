#include <iostream>
using namespace std;

enum gunler {
	pazartesi, sali, carsamba, persembe, cuma, cumartesi, pazar
};

enum sehirler {
	adana, adiyaman, ankara, istanbul
};

enum renk {
	sari , mavi , kirmizi
};



int main () {
	
	gunler gun;
	gun = pazar;
	
	sehirler sehir;
	
	sehir = adana;
	cout << "sehir : " << sehir+ankara << endl;
	
	cout << gun << endl;
	

	
	cout << renkKullanici;

	
	
	
	
	
	return 0;
}
