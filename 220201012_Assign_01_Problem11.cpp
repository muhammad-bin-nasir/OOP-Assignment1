#include <iostream>
using namespace std;

int main()
{
    int rows,columns,temp;
    cout<<"Give the rows and columns of 2D array."<<endl;
    cout<<"Rows: ";
    cin>>rows;
    cout<<"Columns: ";
    cin>>columns;
    int **doublePtr = new int*[rows];
    for (int i=0;i<rows;i++)
    {
        doublePtr[i] = new int[columns];
    }
    int **newdoublePtr = new int*[rows];
    for (int i=0;i<rows;i++)
    {
        newdoublePtr[i] = new int[columns];
    } 
    cout<<"Give the elements of array"<<endl;
    for (int i=0;i<rows;i++)
    {
        cout<<"Elements of "<<i+1<<"th row"<<endl;
        for (int j=0;j<columns;j++)
        {
            cin>>doublePtr[i][j];   
        }
    }
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<columns;j++)
        {
            if(i%2==0)
            {
                if (j!=(columns-1))
                {
                    newdoublePtr[i][j+1] = doublePtr[i][j];
                }
                else
                {
                    newdoublePtr[i][0] = doublePtr[i][j];
                }    
            }
            if(i%2!=0)
            {
                if (j!=0)
                {
                    newdoublePtr[i][j-1] = doublePtr[i][j];
                }
                else
                {
                    newdoublePtr[i][columns-1] = doublePtr[i][j];
                }    
            }            
        }
    }
    cout<<"{ "<<endl;
    for (int i=0;i<rows;i++)
    {
        cout<<"{ ";
        for (int j=0;j<columns;j++)
        {
            cout<<newdoublePtr[i][j]<<" ";   
        }
        cout<<"}"<<endl;
    }
    cout<<"}";   
    return 0;
}    