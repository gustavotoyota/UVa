/*-----------------------------*\
 | Gustavo Toyota - 31/10/2016 |
 | URI 1018 - Banknotes        |
\*-----------------------------*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> banknotes({100, 50, 20, 10, 5, 2, 1});
    int value;
    cin >> value;
    cout << value << '\n';
    for (auto banknote: banknotes) {
        int quantity = value / banknote;
        value -= quantity * banknote;
        cout << quantity << " nota(s) de R$ " << banknote << ",00\n";
    }
    return 0;
}