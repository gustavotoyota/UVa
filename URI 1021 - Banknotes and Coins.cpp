/*--------------------------------*\
 | Gustavo Toyota - 08/05/2016    |
 | URI 1021 - Banknotes and Coins |
\*--------------------------------*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double notas[] = { 100, 50, 20, 10, 5, 2 };
	double moedas[] = { 1, 0.5, 0.25, 0.1, 0.05, 0.01 };

	double preco;
	cin >> preco;

	int num_notas = 6;
	int num_moedas = 6;

	cout << fixed;
	cout.precision(2);
	cout << "NOTAS:\n";
	for (int i = 0; i < num_notas; ++i) {
		int qtd = floor(preco / notas[i]);
		cout << qtd << " nota(s) de R$ " << notas[i] << '\n';
		preco -= qtd * notas[i];
	}
	cout << "MOEDAS:\n";
	for (int i = 0; i < num_moedas; ++i) {
		int qtd = floor(preco / moedas[i]);
		cout << qtd << " moeda(s) de R$ " << moedas[i] << '\n';
		preco -= qtd * moedas[i];
	}

	return 0;
}