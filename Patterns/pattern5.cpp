/*

     a
    bb
   ccc
  dddd

*/

#include <iostream>
using namespace std;

int main()
{
    int k = 97;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j >= (5 - i))
                printf("%c", k);
            else
                cout << " ";
        }
        cout << endl;
        k++;
    }
    return 0;
}