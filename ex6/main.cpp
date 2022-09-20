#include <iostream>

using namespace std;

int main() {

	int age;
	cout << "Digite a sua idade: ";
	cin >> age;
	if (age < 11) {
		cout << "Crianca";
	} else if (age < 18) {
		cout << "Adolescente";
	} else if (age < 50) {
		cout << "Adulto";
	} else {
		cout << "Idoso";
	}
	return 0;
}
