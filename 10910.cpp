/* ----------------------------- *
    Gustavo Toyota - 27/10/2016 
 * ----------------------------- */

#include <iostream>
#include <map>

using namespace std;

int num_tests;
int num_subjects, total_marks, min_marks;

map<pair<int, int>, int> num_ways;

int calc(int total, int depth = 1) {
    map<pair<int, int>, int>::iterator it;
    if ((it = num_ways.find({total, depth})) != num_ways.end())
        return it->second;

    if (depth >= num_subjects)
        return num_ways[{total, depth}] = 1;

    int ways = 0;
    for (int i = 0; i <= total; ++i)
        ways += calc(i, depth + 1);

    return num_ways[{total, depth}] = ways;
}

int main() {
    cin >> num_tests;
    
    while (num_tests--) {
        cin >> num_subjects >> total_marks >> min_marks;
        cout << calc(total_marks - num_subjects * min_marks) << '\n';
        num_ways.clear();
    }

    return 0;
}
