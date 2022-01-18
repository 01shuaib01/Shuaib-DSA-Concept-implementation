#include <iostream>
using namespace std;
//Global variable
// int sum = 0;

int SumEven(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n % 2 == 0)
    {
        return n + SumEven(n - 1);
    }

    else
    {
        SumEven(n - 1);
    }

    // return sum;
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    // SumEven(n);
    cout << endl
         << "sum is " << SumEven(n);
    return 0;
}