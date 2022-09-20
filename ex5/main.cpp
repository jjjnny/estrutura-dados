#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int num;
	cout << "Digite um numero: ";
	cin >> num;
	if (num%2 == 0) {
		cout << "O numero digitado e PAR";	
	} else {
		cout << "O numero digitado e IMPAR";
	}
	return 0;
}
