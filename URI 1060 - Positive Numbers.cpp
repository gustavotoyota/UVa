/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1060 - Positive Numbers |
\*-----------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    double number;
    int positives = 0;
    for (int i = 6; i--;) {
        cin >> number;
        positives = number >= 0 ? positives + 1 : positives;
    }
    
    cout << positives << " valores positivos\n";
    
	return 0;
}