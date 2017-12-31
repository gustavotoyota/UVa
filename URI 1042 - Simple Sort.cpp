/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1042 - Simple Sort      |
\*-----------------------------*/

#include <iostream>
#include <vector>
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
    
    vector<int> original(3);
    cin >> original[0] >> original[1] >> original[2];
    vector<int> sorted(original);
    sort(sorted.begin(), sorted.end());
    for (auto value: sorted)
        cout << value << "\n";
    cout << "\n";
    for (auto value: original)
        cout << value << "\n";

	return 0;
}