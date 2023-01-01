#include <iostream>

using namespace std;

void degerDegistirValue(int degistir) {
	degistir = 5;
}

int degerDegistirReturn(int degistir) {
	degistir = 5;
	return degistir;
}

void degerDegistirPointer(int* degistir) {
	*degistir = 5;	
}

int main() {
	
	// normal degisken tanýmlama ve adresine ulaþma 
	int a;
	a = 5;
	
	cout << "a'nin adresi: " << &a << endl;
	cout << "a'nin boyutu: " << sizeof(a) << " byte" << endl;
	cout << "a'nin degeri: " << a << endl;
	
	// pointer tanýmlama
	// pointer = gösterici
	
	int* b = NULL;
	
	b = &a; 
	*b = 2;
	cout << "a: " << a << endl;
	//b = (int*)0x6ffe04;
	
	// bnin gösterdiði adresteki deðer
	cout << "b'nin gosterdigi deger: " << *b << endl; 
	cout << "b'nin adresi: " << &b << endl;
	cout << "b'nin gosterdigi adres: " << b << endl;
	cout << "b'nin boyutu: " << sizeof(b) << " byte" << endl;
	
	int* c;
	cout << sizeof(c) << " byte" << endl;


	// call by value
	int degistirelecek = 1;
	cout << "degistirelecek once " << degistirelecek << endl;
	degerDegistirValue(degistirelecek);
	cout << "degistirelecek sonra " << degistirelecek << endl;
	
	// deger donduren fonksiyon
	int degistirelecek2 = 1;
	cout << "degistirelecek once " << degistirelecek2 << endl;
	degistirelecek2 = degerDegistirReturn(degistirelecek2);
	cout << "degistirelecek sonra " << degistirelecek2 << endl;
	
	// call by reference
	int d3 = 1;
	cout << "degistirelecek once " << d3 << endl;
	degerDegistirPointer(&d3);
	cout << "degistirelecek sonra " << d3 << endl;
	
	char* karakter = NULL;
	cout << "char adres: " << &karakter << endl;
	karakter = (char*)"b";
	cout << *karakter << endl;
	karakter = (char*)"burhan";
	cout << "char adres: " << &karakter << endl;
	cout << "char boyut: " << sizeof(karakter) << "byte\n";
	cout << "pointera dizi ile eris " << karakter[2] << endl;
	
	cout << karakter << endl;
	
	string s = "burhan";
	cout << s[6] << endl;
	
	char dizi[6];
	dizi[0] = 'b';
	dizi[1] = 'u';
	dizi[2] = 'r';
	dizi[3] = 'h';
	dizi[4] = 'a';
	dizi[5] = 'n';
	
	cout << "dizinin adresi " << &dizi << endl;
	cout << "(dizi+1) adresi " << *(dizi+2) << endl; // dizi[2]
	
	for (int i=0; i<6; i++) {
		cout << "&dizi+" << i << " :" << &dizi+i << "boyut: " << sizeof(dizi[i])<< endl;
	}
	
	cout << "(dizi+2) " << (dizi+2) << endl;
	
	cout << "dizi boyut: " <<sizeof(dizi) << " byte\n";
	
	int diziSayilar[10];
	
	for (int i=0; i<10; i++) {
		diziSayilar[i] = i * 5;
	}
	
	int *pSayi;
	
	pSayi = diziSayilar;
	
	for (int i=0; i<10; i++) {
		cout << "adresteki deger: " << *(pSayi+i) << "adres: " << (pSayi+i) << endl;
	}
	
	//cout <<"bastir" << *(int*)(0x6ffd82) << endl;
	
	
	
	
	
	
	
	
	return 0;	
}

