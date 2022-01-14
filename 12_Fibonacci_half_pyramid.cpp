#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1,b=1,c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            c=a+b;
            b=a;
            a=c;
        }
        cout<<"\n";
    }
}