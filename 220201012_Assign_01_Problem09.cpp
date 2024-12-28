#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[10];
    int *arr1 = new int[5];
    int *arr2 = new int[5];
    cout<<"Give 10 members of array:"<<endl;
    for (int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<5;i++)
    {
        arr1[i] = arr[i];
    }
    for (int i=0;i<5;i++)
    {
        arr2[i] = arr[i+5];
    }
    cout<<"New arrays are: "<<endl<<"{ ";
    for (int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"}"<<endl;
    cout<<"{ ";
    for (int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<"}";
}