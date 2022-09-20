#include <iostream>

using namespace std;
int main() {
	
	float b0, b1, h, area;

	cout << "Digite a base menor, a base maior e a altura do trapézio: ";
	cin >> b0 >> b1 >> h;
	area = (b0+b1)/2 * h;
	cout << "A área do trapézio é: " << area << "cm";
	return 0;
}
