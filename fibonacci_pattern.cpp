#include<iostream>
using namespace std;
void fibo(int n)
{
    static int a=0,b=1,c;
    if(n>=0)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        fibo(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}