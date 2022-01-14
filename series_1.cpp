#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
    static int i=0;
    if(n==0)
    {
        return;
    }
    if(i==0)
    {
        cout<<1;
    }
    else
    cout<<" + "<<1/pow(2,i);
    i++;
    series(n-1);
}

int main()
{
    int n;
    cin>>n;
    series(n);
    return 0;
}