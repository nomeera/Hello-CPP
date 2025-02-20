#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void eng1disp(Distance);
Distance addengl(Distance, Distance);

int main()
{
    Distance d1, d2, d3;

    cout << "\nEnter feet: " ; cin >> d1.feet ;
    cout << "Enter inches: ";  cin >> d1.inches;
    cout << "\nEnter feet: " ; cin >> d2.feet ;
    cout << "Enter inches: ";  cin >> d2.inches;

    cout << "\nd1 = "; eng1disp(d1);
    cout << "\nd1 = "; eng1disp(d2);
    cout << endl;

    d3 = addengl(d1, d2);
    eng1disp(d1); cout << " + ";
    eng1disp(d2); cout << " = ";
    eng1disp(d3); cout << endl;

    return 0;
}

Distance addengl(Distance d1, Distance d2)
{
    Distance d3;
    d3.inches = d1.inches + d2.inches;
    d3.feet = 0;
    if (d3.inches >= 12.0)
    {
        d3.inches -=12.0;
        d3.feet++;
    }
    d3.feet += d1.feet + d2.feet;
    
    return d3;
}

void eng1disp(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"";
}