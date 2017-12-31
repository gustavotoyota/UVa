/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1043 - Triangle         |
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
    
    double sides[3];
    for (int i = 0; i < 3; ++i)
        cin >> sides[i];
    
    bool triangle = true;
    for (int i = 0; i < 3 && triangle; ++i) {
        for (int j = 0; j < 3 && triangle; ++j) {
            if (j == i)
                continue;
            for (int k = 0; k < 3 && triangle; ++k) {
                if (k == j)
                    continue;
                if (sides[i] + sides[j] <= sides[k])
                    triangle = false;
            }
        }
    }
    
    cout.precision(1), cout << fixed;
    
    if (triangle)
        cout << "Perimetro = " << sides[0] + sides[1] + sides[2] << "\n";
    else
        cout << "Area = " << ((sides[0] + sides[1]) * sides[2] / 2) << "\n";

	return 0;
}