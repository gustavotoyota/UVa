/*-------------------------------*\
 | Gustavo Toyota - 01/11/2016   |
 | URI 1036 - Bhaskara's Formula |
\*-------------------------------*/

#include <iostream>
#include <cmath>

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
    
    double a, b, c;
    cin >> a >> b >> c;
    
    double delta = b * b - 4 * a * c;
    
    if (a == 0 || delta < 0)
        cout << "Impossivel calcular\n";
    else {
        cout << fixed;
        cout.precision(5);
        cout << "R1 = " << (-b + sqrt(delta)) / (2 * a) << "\n";
        cout << "R2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
    }

	return 0;
}