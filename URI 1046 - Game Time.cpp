/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1046 - Game Time        |
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
    
    int start, end;
    cin >> start >> end;
    if (start >= end)
        end += 24;
    cout << "O JOGO DUROU " << end - start << " HORA(S)\n";

	return 0;
}