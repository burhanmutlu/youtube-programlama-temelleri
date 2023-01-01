#include <iostream>

using namespace std;

struct deneme {
	int a;
	char b;
	double c;
	string d;
};

int main() {
	
	deneme d1;
	
	char b;
	cout << "b" << sizeof(b) << endl;
	
	cout << sizeof(d1) << endl;
	
	cout << "The sizeof(char) is " << sizeof(char) << " byte/s" << endl;
    cout << "The sizeof(short) is " << sizeof(short) << " byte/s" << endl;
    cout << "The sizeof(int) is " << sizeof(int) << " byte/s" << endl;
    cout << "The sizeof(long) is " << sizeof(long) << " byte/s" << endl;
    cout << "The sizeof(long long) is " << sizeof(long long) << " byte/s" << endl;
    cout << "The sizeof(float) is " << sizeof(float) << " byte/s" << endl;
    cout << "The sizeof(double) is " << sizeof(double) << " byte/s" << endl;
    cout << "The sizeof(long double) is " << sizeof(long double) << " byte/s" << endl;
    cout << "The sizeof(bool) is " << sizeof(bool) << " byte/s" << endl;
	
	
	
	
	
	return 0;
}

