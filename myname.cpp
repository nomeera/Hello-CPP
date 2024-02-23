#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int chsize;
  cout << "please enter char size: ";
  cin >> chsize;

  int stars = 2;
  int spaces = chsize - 1;

  for (int i = 0; i < chsize ; i++)
  {
/*     // print A char
    {
      // spaces loop
      for (int j = 0; j < spaces; j++)
        cout << " ";
      // stars loop
      for (int j = 0; j < stars; j++)
      {
        if (j == 0 || j == stars - 1 || i == chsize / 2)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
      spaces--;
      stars += 2;
    } */
    // print B char
    {

      // stars loop
      for (int j = 0; j < chsize; j++)
      {
        if (j == 0 || j == chsize - 1 || i == 0 || i == chsize / 2 || i == chsize - 1)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }
  }
  return 0;
}