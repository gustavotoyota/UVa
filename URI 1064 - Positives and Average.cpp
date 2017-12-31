/*----------------------------------*\
 | Gustavo Toyota - 02/11/2016      |
 | URI 1064 - Positives and Average |
\*----------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    double value;
    int positives = 0;
    double total = 0;
    for (int i = 6; i--;) {
        cin >> value;
        if (value >= 0) {
            ++positives;
            total += value;
        }
    }
    
    cout.precision(1), cout << fixed;
    
    cout << positives << " valores positivos\n";
    cout << total / positives << "\n";
    
	return 0;
}