#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14
#define topla(x,y) (x+y)

int main() {
	
	
	//cout << sin(0.5) << endl;
	
	cout << PI << endl;
	cout << topla(2,5);
	
	#if (topla(5,3) > 20)
		cout << "buyuktur"<<endl;
	#elif (topla(5,3) == 8)
		cout << "esittir" <<endl;
	#else
		cout << "kucuktur" << endl;
	#endif
	
	
	

	return 0;	
}

