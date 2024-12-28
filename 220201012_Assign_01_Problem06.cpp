#include <iostream>
using namespace std;

int factorial(int *ptr)
{
    int fact = 1;
    for(int i=1;i<*ptr+1;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cout<<"Give a number: "<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is: "<<factorial(&num);
    return 0;
}