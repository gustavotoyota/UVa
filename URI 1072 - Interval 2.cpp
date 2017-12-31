/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1072 - Interval 2       |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int num_values;
    cin >> num_values;
    
    int num_in = 0, num_out = 0;
    while (num_values--) {
        int value;
        cin >> value;
        if (value >= 10 && value <= 20)
            ++num_in;
        else
            ++num_out;
    }
    
    cout << num_in << " in\n";
    cout << num_out << " out\n";
    
	return 0;
}