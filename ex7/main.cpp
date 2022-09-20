#include <iostream>

using namespace std;

int main() {
	
	int ano;
	cout << "Digite um ano: ";
	cin >> ano;
	if (ano%4 == 0 && ano%100 != 0 || ano%400 == 0) {
		cout << "Ano Bissexto";
	} else {
		cout << "O ano nao e Bissexto";
	}
	return 0;
}
