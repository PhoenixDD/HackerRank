#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string perm(int n,string &result)
{
    if(n==1)
        return result;
    int carry=0;
    int num;
    for(int i=0;i<result.size();i++)
    {
        num=((int)result[i]-'0')*n+carry;
        if(num>9)
        {
            result[i]=(char)(num%10)+'0';
            carry=num/10;
        }
        else
        {
            result[i]=(char)num+'0';
            carry=0;
        }
    }
    string car=to_string(carry);
    reverse(car.begin(),car.end());
    if(carry)
        result+=car;
    return perm(n-1,result);
}
int main()
{
    int N;
    cin>>N;
    string result="1";
    result=perm(N,result);
    reverse(result.begin(),result.end());
    cout<<result;
    return 0;
}
