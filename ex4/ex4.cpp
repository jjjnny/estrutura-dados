#include <iostream>

using namespace std;
int main() {
	
	float b0, b1, h, area;

	cout << "Digite a base menor, a base maior e a altura do trap�zio: ";
	cin >> b0 >> b1 >> h;
	area = (b0+b1)/2 * h;
	cout << "A �rea do trap�zio �: " << area << "cm";
	return 0;
}
