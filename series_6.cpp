#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
    static int l=1;
    if(n>0)
    {
        cout<<1/pow(l,l)<<" ";
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