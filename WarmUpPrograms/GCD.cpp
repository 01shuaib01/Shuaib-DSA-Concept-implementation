#include <iostream>
using namespace std;

int main()
{
    int n1, n2, num1, num2, r;

    cout<<"Enter two numbers\n";
    cin>>num1>>num2;

    if (num1 > num2)
    {
        n1 = num1;
        n2 = num2;
    }
    else
    {
        n1 = num2;
        n2 = num1;
    }
    r = n1 % n2;
    while (r != 0)
    {
        n1 = n2;
        n2 = r;
        r = n1 % n2;
    }
    cout<<"GCD is "<<n2;
    return 0;
}