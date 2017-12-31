/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1070 - Six Odd Numbers  |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int start;
    int count = 0;
    
    cin >> start;
    
    if (start % 2 == 0)
        ++start;
    
    for (int i = start; count < 6; ++count, i += 2)
        cout << i << "\n";
    
	return 0;
}