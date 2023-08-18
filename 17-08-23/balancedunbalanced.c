#include <iostream>
#include<string>
using namespace std;

bool isBalanced(const string& str)
{
    int count=0;
    for(char ch:str)
    {
        if(ch=='{'||ch=='['||ch=='(')
        {
            count++;
        }
        else if(ch=='}'||ch==']'||ch==')')
        {
            if(count<0)
            {
                return false;
            }
            count--;
        }
    }
    return count=0;
}
int main ()
{
    string str;
    cout<<"Enter the string with brackets:";
    cin>>str;
    if(isBalanced(str))
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Unbalanced"<<endl;
    }
}
