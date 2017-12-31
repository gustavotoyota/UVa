/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1067 - Odd Numbers      |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int value;
    cin >> value;
    for (int i = 1; i <= value; i += 2)
        cout << i << "\n";
    
	return 0;
}