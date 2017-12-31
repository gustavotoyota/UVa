/*---------------------------------*\
 | Gustavo Toyota - 02/11/2016     |
 | URI 1078 - Multiplication Table |
\*---------------------------------*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= 10; ++i)
        cout << i << " x " << n << " = " << i * n << "\n";
    
	return 0;
}