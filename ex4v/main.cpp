#include <iostream>

using namespace std;

int main() {
	
	int nums[10];
	int fator[10] = {1,1,1,1,1,1,1,1,1,1};
	int i = 0;
	int j = 1;
	int aux = 0;
	
	cout << "Digite 10 numeros: ";
	for (i=0;i<10;i++) {
		cin >> nums[i];
}
	cout << "O fatorial dos numeros digitados e: " <<endl;
	for (i=0;i<10;i++) {
		for (j=0;j<nums[i];j++) {
			aux = nums[i];
			fator[i] *=(aux - j);
		}
		cout << fator[i] <<endl;		
	}
	return 0;
}			
