/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1048 - Salary Increase  |
\*-----------------------------*/

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
    
    double salary;
    cin >> salary;
    
    double increase;
    if (salary <= 400)
        increase = 0.15;
    else if (salary <= 800)
        increase = 0.12;
    else if (salary <= 1200)
        increase = 0.10;
    else if (salary <= 2000)
        increase = 0.07;
    else
        increase = 0.04;
    
    double new_salary, earned;
    new_salary = salary * (1 + increase);
    earned = new_salary - salary;
    
    cout.precision(2), cout << fixed;
    cout << "Novo salario: " << new_salary << "\n";
    cout << "Reajuste ganho: " << earned << "\n";
    cout.precision(0), cout << fixed;
    cout << "Em percentual: " << increase * 100 << " %\n";

	return 0;
}