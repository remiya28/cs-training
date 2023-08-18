#include <iostream>
using namespace std;
int main()
{
    int m,n,mat[100][100],i,j;
    cout<<"Enter the total number of rows";
    cin>>m;
    cout<<"Enter the total number of columns";
    cin>>n;
    cout<<"Enter the matrix elements";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<"The diagonal elements are:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<mat[i][j]<<endl<<" ";
            }
        }
    }
    cout<<endl<<"The upper diagonal elements are:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                cout<<mat[i][j];
            }
        }
    }
    cout<<endl<<"The lower diagonal elements are:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                cout<<mat[i][j];
            }
        }
    }
}