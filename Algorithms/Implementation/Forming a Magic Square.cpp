#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_magic(vector<int> sq)
{
    if(sq[0]+sq[1]+sq[2]!=15)
        return false;
    if(sq[3]+sq[4]+sq[5]!=15)
        return false;
    if(sq[6]+sq[7]+sq[8]!=15)
        return false;
    if(sq[0]+sq[3]+sq[6]!=15)
        return false;
    if(sq[1]+sq[4]+sq[7]!=15)
        return false;
    if(sq[2]+sq[5]+sq[8]!=15)
        return false;
    if(sq[0]+sq[4]+sq[8]!=15)
        return false;
    if(sq[2]+sq[4]+sq[6]!=15)
        return false;
    return true;
}
int main()
{
    int cost,min=numeric_limits<int>::max();
    vector<int> perm={1,2,3,4,5,6,7,8,9};
    vector<vector<int>> magic;
    do
    {
        if(is_magic(perm))
            magic.push_back(perm);
    }while(next_permutation(perm.begin(),perm.end()));
    for(int i=0;i<9;i++)
        cin>>perm[i];
    if(is_magic(perm))
        cout<<0;
    else
    {
        for(auto &i:magic)
        {
            cost=0;
            for(int j=0;j<9;j++)
                cost+=abs(i[j]-perm[j]);
            if(cost<min)
                min=cost;
        }
        cout<<min;
    }
    return 0;
}
