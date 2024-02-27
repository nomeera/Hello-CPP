#include <iostream>

using namespace std;

int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> num[i];
    }

    int max = INT32_MIN;
    int min = INT32_MAX;
    float total = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > max)
            max = num[i];

        if (num[i] < min)
            min = num[i];
        total += num[i];
    }

    cout << "Max num: " << max << "\n";
    cout << "Min num: " << min << "\n";
    cout << "Total: " << total << endl;

    return 0;
}