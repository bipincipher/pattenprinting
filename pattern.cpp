#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=9;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}