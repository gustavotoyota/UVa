/*---------------------------------*\
 | Gustavo Toyota - 02/11/2016     |
 | URI 1080 - Highest and Position |
\*---------------------------------*/

#include <iostream>

using namespace std;

int main() {
    int highest, pos = 1;
    
    cin >> highest;
    
    for (int i = 2; i <= 100; ++i) {
        int value;
        cin >> value;
        
        if (value > highest) {
            highest = value;
            pos = i;
        }
    }
    
    cout << highest << "\n";
    cout << pos << "\n";
    
	return 0;
}