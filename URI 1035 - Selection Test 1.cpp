/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1035 - Selection Test 1 |
\*-----------------------------*/

#include <iostream>
#include <string>

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
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (((b > c) && (d > a) && (c + d > a + b) && (c > 0) && (d > 0) && (a % 2 == 0)) ? "Valores aceitos" : "Valores nao aceitos") << "\n";

	return 0;
}