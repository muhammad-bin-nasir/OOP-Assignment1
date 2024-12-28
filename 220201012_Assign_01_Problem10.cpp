#include <iostream>
using namespace std;

int main()
{
    char myString[] = "A string";
    char *ptr = new char;
    ptr = myString;

    cout<<*ptr<<" "<<*ptr<<" "<<*(ptr+3)<<endl;
    ptr = ptr+2;
    cout<<ptr<<" "<<*(ptr+2)<<" "<<*(ptr+5)<<endl;
    return 0;
}