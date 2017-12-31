/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1052 - Month            |
\*-----------------------------*/

#include <iostream>
#include <map>
#include <string>

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
    
    map<int, string> months({
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}
    });
    
    int month;
    cin >> month;
    
    cout << months[month] << "\n";

	return 0;
}