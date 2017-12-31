/*----------------------------------*\
 | Gustavo Toyota - 30/03/2016      |
 | URI 1068 - Parenthesis Balance I |
\*----------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	while (cin >> s) {
		int p = 0;
		bool good = true;
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
			case '(':
				p++;
				break;
			case ')':
				p--;
				if (p < 0)
					good = false;
				break;
			}
		}
		good = good && p == 0;
		cout << (good ? "correct" : "incorrect") << '\n';
	}

	return 0;
}