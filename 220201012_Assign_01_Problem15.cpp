#include <iostream>
using namespace std;

int main()
{
    int rows,columns,temp,sum=0;
    assignment:
    cout<<"How many assignments to store?"<<endl;
    cin>>temp;
    if (temp<0)
    {
        cout<<"Invalid entry. Please try again"<<endl;
        goto assignment;
    }
    rows = temp;
    int **MarksOfStudents = new int*[rows];
    student:
    cout<<"How many students are there?"<<endl;
    cin>>temp;
    if (temp<0)
    {
        cout<<"Invalid entry. Please try again"<<endl;
        goto student;
    }
    columns = temp;
    for (int i=0;i<rows;i++)
    {
        MarksOfStudents[i] = new int[columns];
    }
    for (int i=0;i<rows;i++)
    {
        cout<<"Assignment "<<i+1<<endl;
        for (int j=0;j<columns;j++)
        {
            again:
            cout<<"Give the marks of student "<<j+1<<": ";
            cin>>temp;
            if (temp<0 || temp>100)
            {
                cout<<"Invalid input. Please try again"<<endl;
                goto again;
            }
            MarksOfStudents[i][j] = temp;
        }
    }

    int *AverageMarks = new int[columns];
    for (int i=0;i<columns;i++)
    {
        for (int j=0;j<rows;j++)
        {
            sum += MarksOfStudents[j][i];
        }
        AverageMarks[i] = sum/rows;
        sum = 0;
    }

    cout<<"The average marks of students are:"<<endl;
    for (int i=0;i<columns;i++)
    {
        cout<<"Student "<<i+1<<": "<<AverageMarks[i]<<endl;
    }
    return 0;
}