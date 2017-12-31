/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1061 - Event Time       |
\*-----------------------------*/

#include <iostream>
#include <string>

#define llint long long int
#define SECS_BY_MIN 60
#define MINS_BY_HOUR 60
#define HOURS_BY_DAY 24
#define SECS_BY_HOUR (SECS_BY_MIN * MINS_BY_HOUR)
#define SECS_BY_DAY (SECS_BY_HOUR * HOURS_BY_DAY)

using namespace std;

int main() {
    string temp;
    int start_day, start_hour, start_min, start_sec;
    int end_day, end_hour, end_min, end_sec;
    
    cin >> temp >> start_day;
    cin >> start_hour >> temp >> start_min >> temp >> start_sec;
    cin >> temp >> end_day;
    cin >> end_hour >> temp >> end_min >> temp >> end_sec;
    
    llint start_total = start_sec + start_min * SECS_BY_MIN + start_hour * SECS_BY_HOUR + start_day * SECS_BY_DAY;
    llint end_total = end_sec + end_min * SECS_BY_MIN + end_hour * SECS_BY_HOUR + end_day * SECS_BY_DAY;
    llint duration = end_total - start_total;

    cout << (duration / SECS_BY_DAY) << " dia(s)\n";
    cout << (duration / SECS_BY_HOUR) % HOURS_BY_DAY << " hora(s)\n";
    cout << (duration / SECS_BY_MIN) % MINS_BY_HOUR << " minuto(s)\n";
    cout << duration % SECS_BY_MIN << " segundo(s)\n";
    
	return 0;
}