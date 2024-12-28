#include <iostream>
using namespace std;

bool isLeap(int year)
{
    if (year % 4 != 0) 
    {
        return false;
    }
    else if (year % 100 != 0)
    {
        return true;
    }
    else if (year % 400 != 0) 
    {
        return false;
    } 
    else 
    {
        return true;
    }
}


void AgeCal(int *dob,int *cur)
{
    int year,month,day,count=0;
    year = cur[2]-dob[2];
    month = cur[1]-dob[1];
    day = cur[0]-dob[0];
    for(int i=dob[2];i<cur[2];i++)
    {
        if (isLeap(i))
        {
            count+=1;
        }
    }
    day = day+count;
    if (day>30)
    {
        day = day-30;
        month = month+1;
    }
    if (month>12)
    {
        month = month-12;
        year = year+1;
    }
    if (day<0)
    {
        day += 30;
        month -= 1;
    }
    if (month<0)
    {
        month+=12;
        year -= 1;
    }
    cout<<"Your age is "<<year<<" years, "<<month<<" months and "<<day<<" days."; 

}


int main()
{
    int DateOfBirth[3],CurrentDate[3];
    cout<<"Give your date of birth (in ddmmyyyy format):"<<endl;
    cin>>DateOfBirth[0]>>DateOfBirth[1]>>DateOfBirth[2];
    cout<<"Give the today's date:"<<endl;
    cin>>CurrentDate[0]>>CurrentDate[1]>>CurrentDate[2];

    AgeCal(DateOfBirth,CurrentDate);
}