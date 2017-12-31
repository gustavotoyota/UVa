/*---------------------------------------------*\
 | Gustavo Toyota - 02/11/2016                 |
 | URI 1071 - Sum of Consecutive Odd Numbers I |
\*---------------------------------------------*/

#include <iostream>
#include <algorithm>
#include <tuple>

#define tup make_tuple

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    
    tie(start, end) = tup(min(start, end), max(start, end));
    
    if (start % 2 == 0)
        --start;
    
    int total = 0;
    for (int i = start + 2; i < end; i += 2)
        total += i;
    
    cout << total << "\n";
    
	return 0;
}