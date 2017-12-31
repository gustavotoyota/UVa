/*-----------------------------*\
 | Gustavo Toyota - 22/03/2016 |
 | URI 1329 - Head or Tail     |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
	int num_jogos;
	int vit_mary;
	char vit;
	int vit_john;

	// Jogos
	do {
		cin >> num_jogos;
		if (num_jogos > 0) {
			vit_mary = 0;
			for (int i = 0; i < num_jogos; i++) {
				cin >> vit;
				if (vit == '0')
					vit_mary++;
			}
			vit_john = num_jogos - vit_mary;
			cout << "Mary won " << vit_mary << " times and John won " << vit_john << " times\n";
		}
	} while (num_jogos > 0);

	return 0;
}