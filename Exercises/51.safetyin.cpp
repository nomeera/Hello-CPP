#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX = 20;
    char str[MAX];
    
    char str2[] = { 'F', 'a', 'r', 'e', 'w', 'e', 'l', 'l', '!',' ', 't', 'h',};

    cout << "\nEnter a string: ";
    cin >> setw(MAX) >> str;

    cout << "You entered: " << str << endl;
    cout << "You entered: " << str2 << endl;

    return 0;
}