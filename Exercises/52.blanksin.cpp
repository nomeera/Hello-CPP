#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "Oh, Captain, my Captain! "
                  "our fearful trip is done";

    const int MAX = 80;
    char str2[MAX];
    
    int j;
    for (j = 0; j < strlen(str1); j++)
        str2[j] = str1[j];
    str2[j] = '\0';

    cout << str2 << endl;

    return 0;
}