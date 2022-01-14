#include<iostream>
using namespace std;
void even(int l,int n)
{
    if(n==0)
    return;
    if(l%2==0)
    {
        cout<<l<<" ";
        even(l+2,n-1);
    }
    else
    even(l+1,n);
}

int main()
{
    int n;
    cin>>n;
    even(1,n);
    return 0;
}