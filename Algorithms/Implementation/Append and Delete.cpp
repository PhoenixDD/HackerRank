#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int match(string &a,string &b)
{
    for(int i=0,j=0;i<a.size(),j<b.size();i++,j++)
    {
        if(a[i]!=b[j])
            return i;
    }
    return a.size()>b.size()?b.size():a.size();
}
string result(string &a,string &b,int &K)
{
    int mach;
    if(a==b)
    {
        if(K%2==0||a.size()*2<K)
            return "Yes";
    }
    else if(a.size()==b.size())
    {
        mach=match(a,b);
        if((a.size()-mach)*2<=K||(((a.size()-mach)*2<K)&&(K-(a.size()-mach)*2)%2==0))
            return "Yes";
    }
    else if(a.size()<b.size())
    {
        mach=match(a,b);
        if(b.size()-mach==K||((b.size()-mach<K)&&(K-b.size()-mach)%2==0))
            return "Yes";
    }
    else 
    {
        mach=match(a,b);
        if(a.size()+b.size()-2*mach==K||((a.size()+b.size()-2*mach<K)&&(K-(a.size()+b.size()-2*mach))%2==0)||a.size()+b.size()<K)
            return "Yes";
    }
    return "No";
    
}
int main()
{
    string a,b;
    int k;
    cin>>a>>b>>k;
    cout<<result(a,b,k);
    return 0;
}