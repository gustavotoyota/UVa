/*-----------------------------*\
 | Gustavo Toyota - 23/03/2016 |
 | URI 1547 - Guess What       |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
	int n;

	scanf("%d", &n);

	int num_alunos;
	int secreto;

	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &num_alunos, &secreto);

		int diff_mais_prox = 1000000;
		int ind_mais_prox = 0;

		for (int j = 1; j <= num_alunos; j++) {
			int numero;
			scanf("%d", &numero);

			int diff = abs(secreto - numero);
			if (diff < diff_mais_prox) {
				diff_mais_prox = diff;
				ind_mais_prox = j;
			}
		}

		printf("%d\n", ind_mais_prox);
	}
}