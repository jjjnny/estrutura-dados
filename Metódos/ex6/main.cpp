#include <iostream>

using namespace std;

int fator (int a) {
	int aux = 1;
	for (int i=0; i < a; i++){
		aux *= a - i;
	}
	return aux;
}

int main() {
	
	int x;
	cout << "Digite um numero: ";
	cin >> x;
	cout << "O fatorial desse numero e: " << fator(x) <<endl;
	return 0;
}
