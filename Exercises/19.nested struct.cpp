#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

int main()
{
    Room room;

    room.length.feet = 5;

    Room dining = {{13, 6.5}, {10, 0.5}};

    cout << dining.length.feet << endl;
    cout << dining.length.inches << endl;
    cout << dining.length.feet << endl;

    return 0;
}