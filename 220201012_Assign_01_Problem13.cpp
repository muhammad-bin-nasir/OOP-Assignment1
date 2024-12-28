#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int **ptr = new int*[3];
    for (int i=0;i<3;i++)
    {
        ptr[i] = new int[3];
    }
    cout<<"Give the elements of array:"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>ptr[i][j];
        }
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (ptr[i][j] != ptr[j][i])
            {
                cout<<"The matrix is not symmetric."<<endl;
                count +=1;
                break;
            }
        }
        if (count!=0)
        break;
    }
    end:
    if (count==0)
    {
        cout<<"The given matrix is symmetric."<<endl;
    }

    delete ptr;
    return 0;
}