#include<iostream>
using namespace std;
void odd(int l,int n)
{
    if(n==0)
    return;
    if(l%2!=0)
    {
        cout<<l<<" ";
        odd(l+2,n-1);
    }
    else
    {
        odd(l+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    odd(1,n);
    return 0;
}