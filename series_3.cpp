#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
    static int l=0;
    if(n==0)
    return;
    if(l==0)
    {
        cout<<1;
        l++;
        series(n-1);
    }
    else
    {
        cout<<" + "<<pow(3,l);
        l++;
        series(n-1);
    }

}
int main()
{
    int n;
    cin>>n;
    series(n);
    return 0;
}