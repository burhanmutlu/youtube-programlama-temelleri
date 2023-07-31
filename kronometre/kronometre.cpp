#include<iostream>
#include<Windows.h>
#include<ctime>
#include<stdlib.h>
#include<conio.h>
#include<thread> // hatayi anlat

using namespace std;

struct zaman{
	int saat;
	int dakika;
	int saniye;
};

void alarmCal() {
	cout << "alarm!!!" << endl;
	cout << "Alarmi kapatmak icin bir tusa basiniz.." << endl;
	int sayac=0;
	while(true) {
		cout << (char)7; 
		Sleep(1000);
		sayac += 1;
		if(kbhit()) {
            break;
        }
	}
	
	cout << "Alarmi " << sayac << " saniye sonra kapattiniz." << endl;
}

bool isSifir(int a){
	if (a==0) {
		return true;
	}else{
		return false;
	}
}

bool isNegatif(int a){
	if (a<0) {
		return true;
	}else{
		return false;
	}
}


int saniyeHesapla(zaman z) {
	if(isSifir(z.saat)&&isSifir(z.dakika)&&isSifir(z.saniye)) {
		// hepsi 0 ise
		cout << "zaman bilgileri 0 olamaz..." << endl;
		return -1;
	} else if(isNegatif(z.saat)||isNegatif(z.dakika)||isNegatif(z.saniye)) {
		cout << "zaman bilgileri negatif olamaz..." << endl;
		return -1;
	} else {
		int saniye = 0;
		saniye += z.saniye;
		saniye += z.dakika * 60;
		saniye += z.saat *60*60;
		return saniye;
	}
}

void sureHesapla(zaman z) {
	Sleep( 1000 * saniyeHesapla(z) );
}

void sureBastir(zaman z) {
	int sure = saniyeHesapla(z);
	while(sure!=0) {
		cout << "kalan sure:" << sure << endl;
		Sleep(1000);
		--sure;
	}
}

int main() 
{
	
	zaman z;
	time_t zaman;
	
	cout << "saat bilgisini giriniz: (saat dakika saniye) cinsinden giriniz: " << endl;
	
	cin >> z.saat >> z.dakika >> z.saniye;
	// alarm suresi basliyor
	time_t ilkZaman = time(NULL);
	
	thread ilkThread(sureHesapla, z);
	thread ikinciThread(sureBastir, z);
	
	
	if(saniyeHesapla(z) != -1) {
		cout << saniyeHesapla(z) << " saniye sonra alarm calacak." << endl;
		ilkThread.join();
		ikinciThread.join();
	} else{
		return 0;
	}
	
	
	// sure bittikten sonra 
	alarmCal();
	
    return 0;
}
