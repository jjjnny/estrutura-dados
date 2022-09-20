#include <iostream>

using namespace std;

int main() {
	
	int nums[12];
	int i, maior, menor, count = 0;
	double media = 0;

	for (i=0; i <12;i++) {
		cin >> nums[i];
		if (nums[i] < menor || menor == 0) {
			menor = nums[i];
		}
		if (nums[i] > maior || maior == 0) {
			maior = nums[i];
		}
		if (nums[i]%2 == 0) {
			count += 1;
		}
		media += nums[i];
	}
	int porce = (count * 100)/12;
	media = media/12;
	cout << "Maior: " << maior << endl << "Menor: " << menor << endl;
	cout << "Quantidade de numeros pares: " << count << endl << "Porcentagem dos numeros pares: " << porce << "%"<< endl;
	cout << "Media dos numeros: " << media << endl;
	return 0;
}
