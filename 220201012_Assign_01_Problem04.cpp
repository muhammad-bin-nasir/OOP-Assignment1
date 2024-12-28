#include <iostream>
using namespace std;

void swap(int *num1,int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main()
{
    int num1,num2;
    cout<<"Give the first nuumber:"<<endl;
    cin>>num1;
    cout<<"Give the second number:"<<endl;
    cin>>num2;
    
    cout<<"Original numbers are:"<<endl;
    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"Numbers after swapping are:"<<endl;
    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;
    return 0;
}