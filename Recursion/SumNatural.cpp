#include <iostream>
using namespace std;

int Sum_Natural(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
  
   return n + Sum_Natural(n-1);
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    Sum_Natural(n);
    cout << "sum is " << Sum_Natural(n);
    return 0;
}