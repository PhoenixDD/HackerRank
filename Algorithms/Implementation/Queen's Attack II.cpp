#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int botleftdiagcover(pair<int,int> &cord)
{
    return min(cord.first-1,cord.second-1);
}
int topleftdiagcover(int &n,pair<int,int> cord)
{
    return min(n-cord.first,cord.second-1);
}
int botrightdiagcover(int &n,pair<int,int> &cord)
{
    return min(cord.first-1,n-cord.second);
}
int toprightdiagcover(int &n,pair<int,int> &cord)
{
    return min(n-cord.first,n-cord.second);
}
int main()
{
    int n,k,total;
    cin>>n>>k;
    pair<int,int> q,minleft,minright,mintop,minbottom,mintopleft,mintopright,mindownleft,mindownright;
    cin>>q.first>>q.second;
    pair<int,int> obs;
    total=2*n-q.second-q.first+q.first+q.second-2+botleftdiagcover(q)+topleftdiagcover(n,q)+botrightdiagcover(n,q)+toprightdiagcover(n,q);
    minleft=minright=mintop=minbottom=mintopleft=mintopright=mindownleft=mindownright=make_pair(-1,-1);
    for(int i=0;i<k;i++)
    {
        cin>>obs.first>>obs.second;
        if(obs.first==q.first&&obs.second>q.second)
        {
            if(minright==pair<int,int>(-1,-1)||obs.second<minright.second)
                minright=obs;
        }
        else if(obs.first==q.first&&obs.second<q.second)
        {
            if(minleft==pair<int,int>(-1,-1)||obs.second>minleft.second)
                minleft=obs;
        }
        else if(obs.second==q.second&&obs.first>q.first)
        {
            if(mintop==pair<int,int>(-1,-1)||obs.first<mintop.first)
                mintop=obs;
        }
        else if(obs.second==q.second&&obs.first<q.first)
        {
            if(minbottom==pair<int,int>(-1,-1)||obs.first>minbottom.first)
                minbottom=obs;
        }
        else if(abs(q.first-obs.first)==abs(q.second-obs.second))
            if(obs.first>q.first&&obs.second<q.second)
            {
                if(mintopleft==pair<int,int>(-1,-1)||obs.first<mintopleft.first)
                    mintopleft=obs;
            }
            else if(obs.first<q.first&&obs.second<q.second)
            {
                if(mindownleft==pair<int,int>(-1,-1)||obs.first>mindownleft.first)
                    mindownleft=obs;
            }
            else if(obs.first<q.first&&obs.second>q.second)
            {
                if(mindownright==pair<int,int>(-1,-1)||obs.first>mindownright.first)
                    mindownright=obs;
            }
            else
            {
                if(mintopright==pair<int,int>(-1,-1)||obs.first<mintopright.first)
                    mintopright=obs;
            }
    }
    if(minright!=pair<int,int>(-1,-1))
            total-=n-minright.second+1;
    if(minleft!=pair<int,int>(-1,-1))
            total-=minleft.second;
    if(mintop!=pair<int,int>(-1,-1))
            total-=n-mintop.first+1;
    if(minbottom!=pair<int,int>(-1,-1))
            total-=minbottom.first;
    if(mintopleft!=pair<int,int>(-1,-1))
        total-=topleftdiagcover(n,mintopleft)+1;
    if(mindownleft!=pair<int,int>(-1,-1))
        total-=botleftdiagcover(mindownleft)+1;
    if(mindownright!=pair<int,int>(-1,-1))
        total-=botrightdiagcover(n,mindownright)+1;
    if(mintopright!=pair<int,int>(-1,-1))
        total-=toprightdiagcover(n,mintopright)+1;
    cout<<total;
    return 0;
}