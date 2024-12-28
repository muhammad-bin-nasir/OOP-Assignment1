#include <iostream>
using namespace std;

void reverseArray(int *arr,int size)
{
    int temp;
    for (int i=0;i<(size/2);i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main()
{
    int size;
    cout<<"What is the size of array?"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Give the members of array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array is:"<<endl<<"{ ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
    reverseArray(arr,size);
    cout<<"The reversed array is:"<<endl<<"{ ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

}