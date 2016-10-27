/* ----------------------------- *
    Gustavo Toyota - 27/10/2016 
 * ----------------------------- */

#include <iostream>
#include <map>

using namespace std;

int num_tests;
int num_subjects, total_marks, min_marks;

map<pair<int, int>, int> num_ways;

int calc(int resto, int nivel = 1) {
	map<pair<int, int>, int>::iterator it;
	if ((it = num_ways.find({resto, nivel})) != num_ways.end())
		return it->second;

	if (nivel >= num_subjects)
		return num_ways[{resto, nivel}] = 1;

	int ways = 0;
	for (int i = 0; i <= resto; ++i)
		ways += calc(i, nivel + 1);

	return num_ways[{resto, nivel}] = ways;
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
