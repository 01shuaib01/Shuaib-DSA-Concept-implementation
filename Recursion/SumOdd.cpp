#include <iostream>
using namespace std;

// int sum = 0;
int SumOdd(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n % 2 == 0)
    {
        SumOdd(n - 1);
    }

    else
    {
        return n + SumOdd(n - 1);
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
         << "sum is " << SumOdd(n);
    return 0;
}