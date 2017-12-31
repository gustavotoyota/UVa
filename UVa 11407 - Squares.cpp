/*-----------------------------*\
 | Gustavo Toyota - 27/10/2016 |
 | UVa 11407 - Squares         |
\*-----------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 10000
#define INF 0x7fffffff
#define uint unsigned int

using namespace std;

vector<int> sqrs(102);
vector<int> min_sqrs(MAX + 1, INF);
int num_tests, value;

int main() {
    for (uint i = 0; i < sqrs.size(); ++i)
        sqrs[i] = i * i;

    for (int i = 0; sqrs[i] <= MAX; ++i)
        min_sqrs[sqrs[i]] = 1;

    for (int i = 2; i <= MAX; ++i) {
        if (min_sqrs[i] > 1)
            continue;
        for (int j = 1; sqrs[j] < i; ++j)
            min_sqrs[i] = min(min_sqrs[i], min_sqrs[i - sqrs[j]] + 1);
    }

    cin >> num_tests;
    while (num_tests--) {
        cin >> value;
        cout << min_sqrs[value] << '\n';
    }

    return 0;
}
