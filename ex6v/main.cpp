#include <iostream>

using namespace std;

	int main() {
		
	int pow, polv, bomb; 
	
	cout << "digite a quantidade de pow: ";
	cin >> pow; 
	
	cout << "digite a quantidade de polv: ";
	cin >> polv;
	
	while (pow > 0 && polv > 0) {
	polv = polv - 5;
	pow = pow - 3;
	bomb +=1;
	}
	
	if (pow < 0 || polv < 0) {
	bomb = bomb - 1;
	polv += 5;
	pow += 3;
	}
	
	cout << "podemos fazer " << bomb <<" bombas!" <<endl;
	cout << "sobraram..." <<"\n polvora: "<< polv <<"\n powder: " << pow;
	return 0;
}
