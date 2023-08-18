include<iostream>
using namespace std;
int main()
{
    int stock=70;capacity=200,bottles,i;
    cout<<"Enter the number of bottles";
    cin>>bottles;
    if(bottle<=stock)
    {
        for(i=0;i<bottles;++i)
        {
            cout<<"Take your Pepsi"<<endl;
        }
        stock=stock-bottles;
    }
    else
    {
        for(i=0;i<stock;i++)
        {
           cout<<"Take your Pepsi"<<endl;
        }
        cout<<"OUT OF STOCK"<<endl;
        stock=0;
    }
    cout<<"Remaining stock"<<stock<<"bottles"<<endl;
    cout<<"HAPPY DRNKS";
    return 0;
}