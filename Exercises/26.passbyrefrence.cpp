#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void scale (Distance&, float);
void engldisp(Distance);

int main()
{
    Distance d1 = {12, 6.5};
    Distance d2 = {10, 5.5};

    cout << "d1 = "; engldisp(d1);
    cout << "\nd2 = "; engldisp(d2);

    scale(d1, 0.5);
    scale(d2, 0.25);

    cout << "\nd1 = "; engldisp(d1);
    cout << "\nd2 = "; engldisp(d2);
    cout << endl;

    return 0;
}

void scale (Distance& d, float factor)
{
    float inches = (d.feet*12 + d.inches) * factor;
    d.feet = static_cast<int>(inches / 12);
    d.inches = inches - d.feet * 12;
}

void engldisp(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"";
}