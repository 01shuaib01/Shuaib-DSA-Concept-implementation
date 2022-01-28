#include <iostream>
using namespace std;

void getFruits(string fruits[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << fruits[i] << endl;
    }
}

int main()
{

    string fruits[4] = {"Apple", "Banana", "Orange", "Mango"};

    getFruits(fruits, 4);
    return 0;
}