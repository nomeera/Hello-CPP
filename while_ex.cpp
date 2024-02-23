#include <iostream>

using namespace std;

int main()
{

    float num1, num2;
    cout << "Dividing num2 by num1 (num2/num1).\n"
         << "Please Enter num1: ";
    cin >> num1;
    cout << "Please Enter num2: ";
    cin >> num2;

    while (num2 == 0)
    {
        cout << "Can't divide on 0\n";
        cout << "Please Enter num2: ";
        cin >> num2;
    }
    cout << "num1/num2 = " << num1 / num2 << endl;

    return 0;
}