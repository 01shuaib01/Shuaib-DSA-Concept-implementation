#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i, j;
    cout << "Enter Range of Number " << endl;
    cin >> num1 >> num2;

    for (i = num1 + 1; i <= num2 - 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            
        }
        if (i == j)
            cout << i << endl;
    }

    return 0;
}