#include <iostream>
using namespace std;

struct kitap {
	string ad;
	string yazar;
	int sayfaSayisi;
	float fiyat;
};

void bastir(kitap k) {
	cout << "kitap ad: " << k.ad << endl
		<< "kitap ucret: " << k.fiyat << endl
		<< "kitap sayfa sayisi: " << k.sayfaSayisi << endl
		<< "kitap yazari: " << k.yazar << endl;;
}

int main () {
	
	
	kitap k;

	k.ad = "algoritmalar";
	k.fiyat = 120.5;
	k.sayfaSayisi = 400;
	k.yazar = "bulent";
	
	kitap k2;
	
	k2.ad = "sayısal cozum";
	k2.fiyat = 240.7;
	k2.sayfaSayisi = 200;
	k2.yazar = "kamil";
	
	bastir(k);
	bastir(k2);
	
	
	
	
	
	return 0;
}
