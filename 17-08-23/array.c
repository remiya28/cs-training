#include <iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the array size";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
    }
    cout<<"The resultant array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}