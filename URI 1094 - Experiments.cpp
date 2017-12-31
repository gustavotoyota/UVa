/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1094 - Experiments      |
\*-----------------------------*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int total = 0;
    map<char, int> counts;
    
    while (n--) {
        int count;
        char type;
        cin >> count >> type;
        total += count;
        counts[type] += count;
    }
    
    cout.precision(2), cout << fixed;
    
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << counts['C'] << "\n";
    cout << "Total de ratos: " << counts['R'] << "\n";
    cout << "Total de sapos: " << counts['S'] << "\n";
    cout << "Percentual de coelhos: " << (double)counts['C'] / total * 100 << " %\n";
    cout << "Percentual de ratos: " << (double)counts['R'] / total * 100 << " %\n";
    cout << "Percentual de sapos: " << (double)counts['S'] / total * 100 << " %\n";
    
	return 0;
}