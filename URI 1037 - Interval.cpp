/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1037 - Interval         |
\*-----------------------------*/

#include <iostream>

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
    
    double value;
    cin >> value;
    
    if (value >= 0 && value <= 25)
        cout << "Intervalo [0,25]";
    else if (value > 25 && value <= 50)
        cout << "Intervalo (25,50]";
    else if (value > 50 && value <= 75)
        cout << "Intervalo (50,75]";
    else if (value > 75 && value <= 100)
        cout << "Intervalo (75,100]";
    else
        cout << "Fora de intervalo";
    cout << "\n";

	return 0;
}