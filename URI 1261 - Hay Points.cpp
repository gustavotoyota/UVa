/*-----------------------------*\
 | Gustavo Toyota - 30/03/2016 |
 | URI 1261 - Hay Points       |
\*-----------------------------*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	map<string, int> v;

	for (int i = n; i--;) {
		string s;
		cin >> s;
		cin >> v[s];
	}

	for (int i = m; i--;) {
		string s;
		int p = 0;
		do {
			cin >> s;
			if (s != ".") {
				if (v.find(s) != v.end()) {
					p += v[s];
				}
			}
		} while (s != ".");
		cout << p << '\n';
	}

	return 0;
}