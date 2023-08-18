#include<iostream>
using namespace std;
int main()
{
    string a,rev=" ",dup=" ";
    int len,i;
    cout<<"Enter the string: ";
    cin>>a;
    for(char ch:a)
    {
        if(dup.find(ch)==string::npos)
        {
            dup+=ch;
        }
    }
    cout<<"String without duplicates"<<dup<<endl;
    len=dup.length();
    for(i=len-1;i>=0;i--)
    {
        rev+=dup[i];
    }
    cout<<"Reversed string without duplicates"<<rev<<endl;
    return 0;
}