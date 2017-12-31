/*-----------------------------------*\
 | Gustavo Toyota - 01/11/2016       |
 | URI 1047 - Game Time with Minutes |
\*-----------------------------------*/

#include <iostream>

#define Debug(x) cout << "Debug: " << #x " = " << (x) << '\n'
#define ullint unsigned long long int
#define llint long long int
#define tup make_tuple
#define MIN(type) numeric_limits<type>::min()
#define MAX(type) numeric_limits<type>::max()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int start_hours, start_mins;
    int end_hours, end_mins;
    cin >> start_hours >> start_mins;
    cin >> end_hours >> end_mins;
    
    int start_total = start_hours * 60 + start_mins;
    int end_total = end_hours * 60 + end_mins;
    if (start_total >= end_total)
        end_total += 24 * 60;
    int diff_total = end_total - start_total;
    cout << "O JOGO DUROU " << diff_total / 60 << " HORA(S) E " << diff_total % 60 << " MINUTO(S)\n";

	return 0;
}