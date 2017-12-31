/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1038 - Snack            |
\*-----------------------------*/

#include <iostream>
#include <map>

#define Debug(x) cout << "Debug: " << #x " = " << (x) << '\n'
#define ullint unsigned long long int
#define llint long long int
#define tup make_tuple
#define MIN(type) numeric_limits<type>::min()
#define MAX(type) numeric_limits<type>::max()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int, double> prices;
    prices[1] = 4.00;
    prices[2] = 4.50;
    prices[3] = 5.00;
    prices[4] = 2.00;
    prices[5] = 1.50;
    
    int code, quantity;
    cin >> code >> quantity;
    cout.precision(2), cout << fixed;
    cout << "Total: R$ " << prices[code] * quantity << "\n";

	return 0;
}