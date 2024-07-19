#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        array[i] = i;

    for (int i = 0; i < size; i++)
        cout << array[i];

    cout << endl;

    delete[] array;

    int x = 10;
    int *xptr = &x;
    cout << "value of xptr: " << xptr
         << ", value of the item that xptr pointing to:" << *xptr
         << ", address of xptr: " << &xptr << endl;

    int y[100];
    y[0] = 10;
    y[1] = 11;
    cout << y << "\n"
         << *y << "\n"
         << (y + 1) << "\n"
         << *(y + 1) << endl;

    int **z = new int *[3];
    z[0] = new int[3];
    z[1] = new int[4];
    z[2] = new int[2];

    delete[] z[2];
    delete[] z[1];
    delete[] z[0];
    delete[] z;

    return 0;
}