#include <iostream>
using namespace std;

void display(int *num)
{
    cout<<"The number is "<<*num;
}

int main()
{
    int *num = new int;
    cout<<"Give any number:"<<endl;
    cin>>*num;
    display(num);
}