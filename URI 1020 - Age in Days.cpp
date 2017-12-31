/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1020 - Age in Days      |
\*-----------------------------*/

#include <iostream>

#define Debug(x) cout << "Debug: " << #x " = " << (x) << '\n'
#define ullint unsigned long long int
#define llint long long int
#define tup make_tuple
#define MIN(type) numeric_limits<type>::min()
#define MAX(type) numeric_limits<type>::max()

#define MONTHS_IN_YEAR 12
#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int age_in_days;
    cin >> age_in_days;
    
    int years = age_in_days / DAYS_IN_YEAR;
    age_in_days -= years * DAYS_IN_YEAR;
    int months = age_in_days / DAYS_IN_MONTH;
    age_in_days -= months * DAYS_IN_MONTH;
    int days = age_in_days;
    
    cout << years << " ano(s)\n";
    cout << months << " mes(es)\n";
    cout << days << " dia(s)\n";

	return 0;
}