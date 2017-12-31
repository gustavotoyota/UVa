/*-----------------------------*\
 | Gustavo Toyota - 30/03/2016 |
 | URI 1430 - Jingle Composing |
\*-----------------------------*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> durs;

int duration(string &s, int &i) {
	int dur = 0;
	while (s[i] != '/') {
		dur += durs[s[i]];
		++i;
	}
	return dur;
}

int main() {
	durs['W'] = 64;
	durs['H'] = 32;
	durs['Q'] = 16;
	durs['E'] = 8;
	durs['S'] = 4;
	durs['T'] = 2;
	durs['X'] = 1;

	string s;

	do {
		cin >> s;
		if (s != "*") {
			int i = 1;
			int correct = 0;
			while (i < s.length() - 1) {
				correct += duration(s, i) == 64 ? 1 : 0;
				++i;
			}
			cout << correct << '\n';
		}

	} while (s != "*");

	return 0;
}