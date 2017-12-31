/*-----------------------------*\
 | Gustavo Toyota - 23/03/2016 |
 | URI 1533 - Detective Watson |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
	int n;
	int sp1i;
	int sp1v;
	int sp2i;
	int sp2v;
	do {
		cin >> n;
		if (n != 0) {
			sp1i = 0;
			sp1v = 0;
			sp2i = 0;
			sp2v = 0;
			for (int i = 1; i <= n; i++) {
				int v;
				cin >> v;
				if (v >= sp1v) {
					sp2i = sp1i;
					sp2v = sp1v;
					sp1i = i;
					sp1v = v;
				}
				else if (v >= sp2v) {
					sp2v = v;
					sp2i = i;
				}
			}
			printf("%d\n", sp2i);
		}
	} while (n != 0);

	return 0;
}