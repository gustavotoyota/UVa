/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1073 - Even Square      |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i <= n; i += 2)
        cout << i << "^2 = " << i * i << "\n";
    
	return 0;
}