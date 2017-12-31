/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1050 - DDD              |
\*-----------------------------*/

#include <iostream>
#include <map>
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
    
    map<int, string> dest;
    dest[61] = "Brasilia";
    dest[71] = "Salvador";
    dest[11] = "Sao Paulo";
    dest[21] = "Rio de Janeiro";
    dest[32] = "Juiz de Fora";
    dest[19] = "Campinas";
    dest[27] = "Vitoria";
    dest[31] = "Belo Horizonte";
    
    int ddd;
    cin >> ddd;
    if (dest.find(ddd) == dest.end())
        cout << "DDD nao cadastrado\n";
    else
        cout << dest[ddd] << "\n";

	return 0;
}