#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <set>
using namespace std;
int main()
{
    int t,di,mi,maxi=INT_MIN,sum=0;
    cin>>t;
    vector<int>d,m;
    d.reserve(t);
    m.reserve(t);
    while(t--)
    {
        cin>>di>>mi;
        if(di>maxi)
            maxi=di;
        d.push_back(di);
        m.push_back(mi);
    }
    set<int> time;
    for(int i=1;i<=maxi+1;i++)
        time.insert(i);
    for(int i=0;i<d.size();i++)
    {
        set<int>::iterator p1=upper_bound(time.begin(),time.end(),d[i]),p2=p1;
        while(p1!=time.begin()&&m[i]>0)
        {
            p1--;
            m[i]--;
        }
        time.erase(p1,p2);
        sum+=m[i];
        cout<<sum<<endl;
    }
}