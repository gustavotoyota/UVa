/*---------------------------------------------*\
 | Gustavo Toyota - 02/11/2016                 |
 | URI 1066 - Even, Odd, Positive and Negative |
\*---------------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int value;
    int evens = 0;
    int odds = 0;
    int positives = 0;
    int negatives = 0;
    
    for (int i = 0; i < 5; ++i) {
        cin >> value;
        evens += value % 2 == 0;
        odds += value % 2 != 0;
        positives += value > 0;
        negatives += value < 0;
    }
    
    cout << evens << " valor(es) par(es)\n";
    cout << odds << " valor(es) impar(es)\n";
    cout << positives << " valor(es) positivo(s)\n";
    cout << negatives << " valor(es) negativo(s)\n";
    
	return 0;
}