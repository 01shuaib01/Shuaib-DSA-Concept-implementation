#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max, flag = 1;

    cout << "Enter two number\n";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    while (flag)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "LCM is " << max;
            break;
        }
        ++max;
    }
    return 0;
}