#include <iostream>
using namespace std;

int main()
{
    int size,maximum=0,secondMaximum=0,index,additive;
    cout<<"Give the size of array:"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<"Give the elements of array:"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for (int i=0;i<size;i++)
    {
        if (array[i]>maximum)
        {
            maximum = array[i];
            index = i;
        }
    }
    for (int i=0;i<size;i++)
    {
        if(array[i]>secondMaximum && array[i]!=maximum)
        {
            secondMaximum = array[i];
        }
    }
    additive = maximum - secondMaximum;

    int *newArray = new int[size+1];
    for (int i=0;i<size;i++)
    {
        if (i<index)
        {
            newArray[i] = array[i];
        }
        if (i==index)
        {
            newArray[i] = secondMaximum;
            newArray[i+1] = additive;
        }
        if (i>index)
        {
            newArray[i+1] = array[i];
        }
    }
    cout<<"{ ";
    for (int i=0;i<size+1;i++)
    {
        cout<<newArray[i]<<" ";
    }
    cout<<"}";

    delete[] array;
    delete[] newArray;
    return 0;
}