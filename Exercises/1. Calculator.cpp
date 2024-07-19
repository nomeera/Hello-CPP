#include <iostream>

using namespace std;

int main()
{
    // variables
    float num1, num2;
    short oper;

    // user interface
    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;
    cout << "Please choice operation: "
         << "1) Summation."
         << "2) Subtraction."
         << "3) Multiplication."
         << "4) Division.\n";
    cin >> oper;

    // process
    switch (oper)
    {
    case 1:
        cout << "Summation " << num1 << " and " << num2 << " equal: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Subtraction " << num1 << " from " << num2 << " equal: " << num2 - num1 << endl;
        break;
    case 3:
        cout << "Multiplication " << num1 << " with " << num2 << " equal: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 == 0)
        {
            cout << "Can't divide by zero" << endl;
            return -1;
        }
        cout << "Subtraction " << num1 << " by " << num2 << " equal: " << num1 / num2 << endl;
        break;
    default:
        cout << "Please Select correct Operation.\n"
                "Exiting......\n"
             << endl;
        break;
    }

    return 0;
}