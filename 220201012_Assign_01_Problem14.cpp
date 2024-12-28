#include <iostream>
using namespace std;

int main()
{
    int **array1 = new int*[3];
    for (int i=0;i<3;i++)
    {
        array1[i] = new int[3];
    }
    cout<<"Give the elements of array 1:"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>array1[i][j];
        }
    }
    int **array2 = new int*[3];
    for (int i=0;i<3;i++)
    {
        array2[i] = new int[3];
    }
    cout<<"Give the elements of array 2:"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>array2[i][j];
        }
    }
    
    int **multiplyArray =  new int*[3];
    for (int i=0;i<3;i++)
    {
        multiplyArray[i] = new int[3];
    }
    int **addArray =  new int*[3];
    for (int i=0;i<3;i++)
    {
        addArray[i] = new int[3];
    } 

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            multiplyArray[i][j] = array1[i][j] * array2[i][j];
            addArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
    
    cout<<"Addition gives:"<<endl<<"{ "<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<addArray[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" }"<<endl<<endl;

    cout<<"Multiplication gives:"<<endl<<"{ "<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<multiplyArray[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" }"<<endl;

}