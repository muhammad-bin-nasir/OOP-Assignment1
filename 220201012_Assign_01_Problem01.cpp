#include <iostream>
using namespace std;

int secondSmallest(int *sum,int *digits)
{
    int temp=0,remainder,count=0,lowerLimit,upperLimit,result=1;
    for(int i=0;i<(*digits-1);i++)
    {
        result = result * 10;
    }
    lowerLimit = result;
    result = 1;
    for(int i=0;i<*digits;i++)
    {
        result = result * 10;
    }
    upperLimit = result-1;
    for (int i=lowerLimit;i<upperLimit;i++)
    {
        int toCheck = i;
        temp = 0;
        while(toCheck>0)    
        {   
            remainder=toCheck%10;    
            temp=temp+remainder;    
            toCheck=toCheck/10;    
        }   
        if(temp==(*sum))
        {
            count+=1;
        }
        if(count==2)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int sum,digits;
    cout<<"Give the number to which sum should be equal:"<<endl;
    cin>>sum;
    cout<<"Give the digits of number:"<<endl;
    cin>>digits;

    cout<<"The second number whose sum equals "<<sum<<" and "<<digits<<" digits is "<<secondSmallest(&sum,&digits);
    return 0;
}