/*-----------------------------*\
 | Gustavo Toyota - 31/10/2016 |
 | URI 1014 - Consumption      |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    double distance, fuel;
    cin >> distance >> fuel;
    cout << fixed;
    cout.precision(3);
    cout << (distance / fuel) << " km/l\n";
    return 0;
}