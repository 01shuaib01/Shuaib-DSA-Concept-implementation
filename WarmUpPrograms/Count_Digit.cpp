#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter number ";
    cin >> num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << "total digit is " << count;
    return 0;
}