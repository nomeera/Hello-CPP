#include <iostream>

using namespace std;

enum days_of_week
{
    Sat,
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri
};

int main()
{
    days_of_week day1, day2, day3;
    day1     = Mon;
    day2 = Thu;
    int diff = day2 - day1;

    cout << "Day1: " << day1 << "\nDay2: " << day2 << endl;

    cout << "Days Between = " << diff << endl;

    if (day1 < day2)
        cout << "day1 comes before day2/n";

    return 0;
}