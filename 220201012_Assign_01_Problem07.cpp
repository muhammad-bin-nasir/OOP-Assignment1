#include <iostream>
using namespace std;

void evenOddSeparator(int *arr,int size)
{
    int tempArray[size];
    int count=0;
    for (int i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            tempArray[count]=arr[i];
            count+=1;
        }
    }
    for (int i=0;i<size;i++)
    {    
        if (arr[i]%2!=0)
        {
            tempArray[count]=arr[i];
            count+=1;
        }
    }
    for (int i=0;i<size;i++)
    {
        arr[i] = tempArray[i];
    }
}

int main()
{
    int size;
    cout<<"Give the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Give the members of array:"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    evenOddSeparator(arr,size);
    cout<<"{ ";
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}";

}