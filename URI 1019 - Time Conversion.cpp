/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1019 - Time Conversion  |
\*-----------------------------*/

#include <iostream>

using namespace std;

int main() {
    int time;
    cin >> time;
    int hours = time / 3600;
    int minutes = (time % 3600) / 60;
    int seconds = time % 60;
    cout << hours << ':' << minutes << ':' << seconds << '\n';
    return 0;
}