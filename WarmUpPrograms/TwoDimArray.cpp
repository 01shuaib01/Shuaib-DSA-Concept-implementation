#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello World";
    int arr1[3][3], arr2[3][3], arr[3][3];

    cout << "Enter first metrix element\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter second metrix element\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of Metrix is\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    /***************Transpose*****************/
    // cout<<"\nmetrix element is\n";
    //  for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    //  cout<<"\nTranspose metrix element is\n";
    //  for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++){
    //         cout<<arr[j][i];
    //     }
    //     cout<<endl;
    // }
    return 0;
}
