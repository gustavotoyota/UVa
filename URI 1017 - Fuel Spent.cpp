/*-----------------------------*\
 | Gustavo Toyota - 31/10/2016 |
 | URI 1017 - Fuel Spent       |
\*-----------------------------*/

#include <iostream>

#define ullint unsigned long long int

using namespace std;

int main() {
    ullint time_spent, avg_speed;
    cin >> time_spent >> avg_speed;
    cout << fixed;
    cout.precision(3);
    cout << (time_spent * avg_speed) / 12.0 << "\n";
    return 0;
}