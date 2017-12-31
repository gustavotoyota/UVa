/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1045 - Triangle Types   |
\*-----------------------------*/

#include <iostream>
#include <algorithm>

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
    
    sort(sides, sides + 3);
    
    double a = sides[2], b = sides[1], c = sides[0];
    double a2 = a * a, b2 = b * b, c2 = c * c;
    
    if (a >= b + c)
        cout << "NAO FORMA TRIANGULO\n";
    else {
        if (a2 == b2 + c2)
            cout << "TRIANGULO RETANGULO\n";
        if (a2 > b2 + c2)
            cout << "TRIANGULO OBTUSANGULO\n";
        if (a2 < b2 + c2)
            cout << "TRIANGULO ACUTANGULO\n";
        if (a == b && b == c)
            cout << "TRIANGULO EQUILATERO\n";
        if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
            cout << "TRIANGULO ISOSCELES\n";
    }

	return 0;
}