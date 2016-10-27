#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 10000
#define INF 0x7fffffff
#define uint unsigned int

using namespace std;

vector<int> quadrados(102);
vector<int> min_somas(MAX + 1, 0x7fffffff);
int num_testes, valor;

int main() {
	for (uint i = 0; i < quadrados.size(); ++i)
		quadrados[i] = i * i;

	for (int i = 0; quadrados[i] <= MAX; ++i)
		min_somas[quadrados[i]] = 1;

	for (int i = 2; i <= MAX; ++i) {
		if (min_somas[i] > 1)
			continue;
		for (int j = 1; quadrados[j] < i; ++j)
			min_somas[i] = min(min_somas[i], min_somas[i - quadrados[j]] + 1);
	}

	cin >> num_testes;
	while (num_testes--) {
		cin >> valor;
		cout << min_somas[valor] << '\n';
	}

	return 0;
}
