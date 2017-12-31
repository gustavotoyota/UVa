/*--------------------------------------*\
 | Gustavo Toyota - 02/11/2016          |
 | URI 1065 - Even Between five Numbers |
\*--------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int value;
    int count = 0;
    
    for (int i = 0; i < 5; ++i) {
        cin >> value;
        if (value % 2 == 0)
            ++count;
    }
    
    cout << count << " valores pares\n";
    
	return 0;
}