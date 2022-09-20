#include <iostream>

using namespace std;

int quadrado_a(int a) {
	a = a*a;
	return a;
}
int quadrado_b(int b) {
	b = b*b;
	return b;
}
int soma (int a, int b) {
	int result = a + b;
	return result;
}
int main() {
	
	int x, y;
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	cout << "Resultado: " << soma(quadrado_a(x), quadrado_b(y)) << "." <<endl;
	return 0;
}
