#include <iostream>

using namespace std;

// in c
enum Color : char
{
    Red = 'R',
    Green = 'G',
    Blue = 'B'
};

// in c++
enum class Colors
{
    R = 158,
    G = 128,
    B = 19
};

int main()
{
    Color c = Red;
    int colorValue = Red;
    if (c == Red)
        cout << "The color is Red" << " and color value is " << (char)colorValue << endl;

    Colors g = Colors::G;
    int colorsValue =  static_cast<int>(Colors::G);
    if (g == Colors::G)
        cout << "The color is Green " << "and color value is " << colorsValue << endl;

    return 0;
}