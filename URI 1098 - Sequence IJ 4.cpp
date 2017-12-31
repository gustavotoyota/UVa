/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1098 - Sequence IJ 4    |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    for (double i = 0; i <= 2; i += 0.2) {
        for (double j = i + 1; j <= i + 3; ++j)
            cout << "I=" << i << " J=" << j << "\n";
    }
    
	return 0;
}