#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int base,exp;
    cout<<"Enter base of number ";
    cin>>base;
    cout<<"Enter Exp of number ";
    cin>>exp;

    int ans = pow(base, exp);

    cout<<"Power of a number is "<<ans;
    return 0;
}