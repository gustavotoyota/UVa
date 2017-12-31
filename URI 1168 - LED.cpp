/*-----------------------------*\
 | Gustavo Toyota - 23/03/2016 |
 | URI 1168 - LED              |
\*-----------------------------*/

#include <iostream>
#include <string>

using namespace std;

int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
	int n;

	cin >> n;

	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		int l = 0;

		for (int j = 0; j < s.length(); j++)
			l += leds[s[j] - '0'];

		cout << l << " leds\n";
	}

	return 0;
}