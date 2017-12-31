/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1074 - Even or Odd      |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int num_values;
    cin >> num_values;
    
    while (num_values--) {
        int value;
        cin >> value;
        if (value == 0)
            cout << "NULL\n";
        else {
            cout << (value % 2 == 0 ? "EVEN" : "ODD");
            cout << " ";
            cout << (value < 0 ? "NEGATIVE" : "POSITIVE");
            cout << "\n";
        }
    }
    
	return 0;
}