// recursive function to find sum of digit.

#include <iostream>
using namespace std;

int Sum_Of_Digit(int n);    //Diclaration of function.

int Sum_Of_Digit(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + Sum_Of_Digit(n / 10);
}

int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;

    cout << "sum of digit is = " << Sum_Of_Digit(n);
    return 0;
}