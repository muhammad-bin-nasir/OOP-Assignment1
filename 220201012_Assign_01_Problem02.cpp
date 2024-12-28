#include <iostream>
using namespace std;

void sumOfElements(int *arr, int *size, int *sum, int *first_element, int *second_element)
{
    for(int i=0;i<*size;i++)
    {
        for(int j=i;j<*size;j++)
        {
            if ((arr[i]+arr[j])==*sum)
            {
                *first_element = i;
                *second_element = j;
                break;
            }
        }
    }
    
}

int main()
{
    int* first_element = new int;
    int*second_element = new int;
    int*sum = new int;
    int*members = new int;
    cout<<"How many elements of the array?"<<endl;
    cin>>*members;
    int arr[*members];
    cout<<"Give the members of array"<<endl;
    for(int i=0;i<*members;i++)
    {
        cin>>arr[i];
    }
    cout<<"What is the sum?"<<endl;
    cin>>*sum;
    
    sumOfElements(arr,members,sum,first_element,second_element);
    cout<<"The array given is:"<<endl;
    cout<<"{ ";
    for(int i=0;i<*members;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"}"<<endl;
    cout<<"The elements at index "<<*first_element<<" and "<<*second_element<<" when added give the sum "<<*sum;
    return 0;
}

