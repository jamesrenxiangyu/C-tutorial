#include <iostream>
#include <iomanip>
using namespace std;
typedef enum {SUN, MON, TUE, WE, THU, FR, SAT} DAYS;

int main()
{
    int date;
    const DAYS day1 = SAT;
    DAYS day;

    cout << "Input a day from '1-31': \n";
    cin >> date;
    if (date<1 || date>31){
        cout << "Wrong Input! \n";
        return 1;
    }

    day = (DAYS)((date + (int)day1 -1) % 7);
    cout << "Calender 2021-5 \n";
    cout << "---------------------------" << endl;
    cout << "SU  MO  TU  WE  TH  FR  SA \n";
    if (day == SUN) cout << setw(2) << date;
    else if (day == MON) cout << setw(6) << date;
    else if (day == TUE) cout << setw(10) << date;
    else if (day == WE) cout << setw(14) << date;
    else if (day == THU) cout << setw(18) << date;
    else if (day == FR) cout << setw(22) << date;
    else if (day == SAT) cout << setw(26) << date;
    cout << endl << "---------------------------\n";
    return 0;
}
