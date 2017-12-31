/*-----------------------------------*\
 | Gustavo Toyota - 02/11/2016       |
 | URI 1041 - Coordinates of a Point |
\*-----------------------------------*/

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
    
    double x, y;
    cin >> x >> y;
    
    if (x == 0 && y == 0)
        cout << "Origem\n";
    else if (x == 0)
        cout << "Eixo Y\n";
    else if (y == 0)
        cout << "Eixo X\n";
    else if (x > 0 && y > 0)
        cout << "Q1\n";
    else if (x < 0 && y > 0)
        cout << "Q2\n";
    else if (x < 0 && y < 0)
        cout << "Q3\n";
    else if (x > 0 && y < 0)
        cout << "Q4\n";

	return 0;
}