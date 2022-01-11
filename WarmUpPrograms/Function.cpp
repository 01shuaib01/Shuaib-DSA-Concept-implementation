
#include <iostream>
using namespace std;

void EvenOdd(int num)
{
    if (num % 2 == 0)
        cout << "Is Even";
    else
        cout << "Is Odd";
}

int IsGreater(int a, int b)
{
    int c = ((a > b) ? a : b);
    return c;
}

int IsGreater2(int a, int b, int c)
{
    int result = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    return result;
}

int Sum_N_Number(int num)
{
    int sum = 0, i;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int SumEvenNumber(int num)
{
    int sum = 0, i;
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int CountDigit(int num)
{
    int count = 0;
    while (num != 0)
    {
        int rem = num / 10;
        count++;
    }
    return count;
}

int DigSum(int num)
{
    int sum = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}

void IsPrime(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not Prime";
            break;
        }
    }
    if (num == i)
        cout << "Prime";
}

int main()
{
    EvenOdd(5);
    cout << endl
         << IsGreater(34, 39) << " Is greater";
    cout << endl
         << IsGreater2(44, 39, 65) << " Is greater" << endl;

    cout << Sum_N_Number(5) << endl;

    cout << SumEvenNumber(10) << endl;
    cout << DigSum(3213) << endl;
    IsPrime(232);
    // cout << "Total digit is " << CountDigit(321) << endl;
    return 0;
}