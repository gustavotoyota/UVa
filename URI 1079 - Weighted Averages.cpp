/*------------------------------*\
 | Gustavo Toyota - 02/11/2016  |
 | URI 1079 - Weighted Averages |
\*------------------------------*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout.precision(1), cout << fixed;
    
    while (n--) {
        double a, b, c;
        cin >> a >> b >> c;
        cout << (a * 2 + b * 3 + c * 5) / 10 << "\n";
    }
    
	return 0;
}