/*----------------------------------------*\
 | Gustavo Toyota - 31/10/2016            |
 | URI 1015 - Distance Between Two Points |
\*----------------------------------------*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1;
    double x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fixed;
    cout.precision(4);
    cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << '\n';
    return 0;
}