/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1075 - Remaining        |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= 10000; ++i) {
        if (i % n == 2)
            cout << i << "\n";
    }
    
	return 0;
}