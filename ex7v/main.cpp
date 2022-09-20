#include <iostream>

using namespace std;

int main() {
	
	int nums1[7], nums2[7], resul[7];
	char op[7];
	int i = 0;
	
	cout << "Digite neste formato: numero (operador) numero." << endl;
	cout << "ATENÇAO! Digite o simbolo da operaçao: +, -, * ou /" << endl;
	
	for (i=0; i<7;i++) {
		cin >> nums1[i] >> op[i] >> nums2[i];
}
	for (i=0; i<7;i++) {
		if (op[i]== '*') {
			resul[i] = nums1[i] * nums2[i];
			cout << resul[i]<< endl;
		}
		if (op[i] == '/') {
			resul[i] = nums1[i] / nums2[i];
			cout << resul[i]<< endl;
		}		
		if (op[i]== '+') {
			resul[i] = nums1[i] + nums2[i];
			cout << resul[i]<< endl;
		}
		if (op[i] == '-') {
			resul[i] = nums1[i] - nums2[i];
			cout << resul[i]<< endl;
		}	
	}
	return 0;
}	
