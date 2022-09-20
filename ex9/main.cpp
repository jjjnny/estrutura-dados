#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, n4, menor, maior;
	cout << "Digite 4 numeros: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	maior = n1;
	menor = n1;
	
	if (maior < n2) {
		maior = n2;
	} else if (maior < n3) {
		maior = n3;
	}else if (maior < n4){
		maior = n4;	
	}
		if (menor > n2) {
		menor = n2;
	} else if (menor > n3) {
		menor = n3;
	}else if (menor > n4){
		menor = n4;	
	}
	cout << "Maior: " << maior <<endl << "Menor: " << menor;
	return 0;
}
