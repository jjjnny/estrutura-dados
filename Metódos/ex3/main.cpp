#include <iostream>

using namespace std;

int primo (int a){
	
	for (int i = 2; i <= a/2; i++){
		if (a%i == 0) {
			a = 0;
		} else {
			a = 1;
		}
	}
	return a;
}

int main() {
	
	int x;
	
	cout << "digite um numero: ";
	cin >> x;
	if (primo(x) == 1) {
		cout << "numero primo";
	} else {
		cout << "nao e numero primo";
	}
	return 0;
}
