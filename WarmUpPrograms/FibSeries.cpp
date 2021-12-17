#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, temp, n;
    cout << "How many term you want of fib series." << endl;
    cin >> n;

    cout << a << "\t" << b;
    for (int i = 1; i <= n; i++)
    {
        temp = a + b;
        cout << "\t" << temp;

        a = b;
        b = temp;
    }

    return 0;
}