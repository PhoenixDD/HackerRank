#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int setbits(int n)
{
    long long int cnt=0;
    while(n)
    {
        n&=n-1;
        cnt++;
    }
    return cnt;
}
long long bits(int a)
{
    if (a>=0)
    {
        if (!a)
            return 0;
        else if(!(a%2))
             return bits(a-1)+setbits(a);
        else
            return(2*bits(a/2))+((long long)a+1)/2;
    }
    else
    {
        a++;
        return((long long)(-a) + 1)*32-bits(-a);
    }
}
int main()
{
    int_fast32_t T,A,B;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        if(A>=0&&B>=0)
            cout<<bits(B)-bits(A==0?A:A-1)<<endl;
        else if(A<=0&&B<=0)
            cout<<bits(A)-bits(B==0?B:B+1)<<endl;
        else
        {
            cout<<bits(A)+bits(B)<<endl;
        }
    }
}