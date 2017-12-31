/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1097 - Sequence IJ 3    |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 9; i += 2) {
        for (int j = i + 6; j >= i + 4; --j)
            cout << "I=" << i << " J=" << j << "\n";
    }
    
	return 0;
}