/*-----------------------------*\
 | Gustavo Toyota - 01/11/2016 |
 | URI 1040 - Average 3        |
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
    
    double weights[4] = {2, 3, 4, 1};
    
    double grades[4];
    for (int i = 0; i < 4; ++i)
        cin >> grades[i];
    
    cout.precision(1), cout << fixed;
    
    double average = 0;
    for (int i = 0; i < 4; ++i)
        average += grades[i] * weights[i];
    average /= 10.0;
    
    cout << "Media: " << average << "\n";
    if (average >= 7)
        cout << "Aluno aprovado.\n";
    else if (average >= 5) {
        cout << "Aluno em exame.\n";
        double exam;
        cin >> exam;
        cout << "Nota do exame: " << exam << "\n";
        average = (average + exam) / 2.0;
        if (average >= 5)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        cout << "Media final: " << average << "\n";
    }
    else
        cout << "Aluno reprovado.\n";
    
    

	return 0;
}