#include<iostream>
using namespace std;
int check(int x)
{
    int f=0;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        f=1;
        break;
    }
    if(f==0)
    {
        return true;
    }
    return false;

}
void prime(int l,int n)
{
    if(n==0)
    return;
    if(check(l))
    {
        cout<<l<<" ";
        prime(l+1,n-1);
    }
    else
    {
        prime(l+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    prime(2,n);
    return 0;
    
}