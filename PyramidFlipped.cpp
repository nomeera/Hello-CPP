#include <iostream>

using namespace std;

int main()
{

	int hight;
	cout << "Please Enter Pyramid Hight: ";
	cin >> hight;
	int spaces = hight - 1;
	int stars = 1;
	int flip = -1;

	for (int i = 0; i < hight * 2 - 1; i++)
	{
		for (int j = 0; j < spaces; j++)
			cout << " ";
		for (int j = 0; j < stars; j++)
			cout << "*";

		cout << endl;
		stars += -2 * flip;
		spaces += flip;

		if (i == hight - 1)
		{
			flip *= -1;
			stars = 2 * hight - 3;
			spaces = 1;
		}
	}

	return 0;
}