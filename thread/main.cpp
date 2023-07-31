#include <iostream> 
#include <thread>	
#include<unistd.h>

using namespace std;

unsigned int sure = 10;

void sureHesapla() {
	cout << "sure hesaplamaya basladi " << endl;
	sleep(sure);
	cout << "sure hesaplama işlemi bitti" << endl;
}

void sureBastir() {
	while(sure!=0) {
		cout << "kalan sure:" << sure << endl;
		sleep(1);
		--sure;
	}
}


int main()
{
	thread ilkThread(sureHesapla);
	thread ikinciThread(sureBastir);

	ilkThread.join();
	ikinciThread.join();


	return 0;
}