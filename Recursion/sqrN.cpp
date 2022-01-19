// Squre of first N natural number.

#include <iostream>
using namespace std;

int sqr(int n)
{
    // base case.
    if (n == 0)
    {
        return 0;
    }

    cout << n << " "  ;
    return (n * n) + sqr(n - 1);
}

int main()
{
    int n;
    cout << "Enter how many term you want\n";
    cin >> n;

    cout << endl
         << "sum is " << sqr(n);
    return 0;
}