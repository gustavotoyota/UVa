/*------------------------------*\
 | Gustavo Toyota - 30/08/2016  |
 | UVa 100 - The 3n + 1 problem |
\*------------------------------*/

#include <iostream>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

#define lli long long int

map<lli, lli> cycle_lens({ {1, 1} });

lli get_cycle_len(lli num) {
    queue<lli> nums;
    lli cycle_len = 1;

    while (num != 1) {
        nums.push(num);
        if (num % 2 == 0)
            num /= 2;
        else
            num = 3 * num + 1;
        if (cycle_lens.find(num) != cycle_lens.end()) {
            cycle_len += cycle_lens[num];
            break;
        }
        ++cycle_len;
    }

    lli curr_len = 0;
    while (!nums.empty()) {
        num = nums.front();
        nums.pop();

        cycle_lens[num] = cycle_len - curr_len++;
    }

    return cycle_len;
}

lli get_max_cycle_len(lli a, lli b) {
    lli max_cycle_len = 0;
    tie(a, b) = make_tuple(min(a, b), max(a, b));
    for (lli i = a; i <= b; ++i)
        max_cycle_len = max(max_cycle_len, get_cycle_len(i));

    return max_cycle_len;
}

int main() {
    lli i, j;

    while (cin >> i >> j && i > 0 && j > 0)
        cout << i << ' ' << j << ' ' << get_max_cycle_len(i, j) << '\n';

    return 0;
}