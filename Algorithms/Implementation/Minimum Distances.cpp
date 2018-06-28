#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;
int main()
{
    int n,temp,min=INT_MAX;
    cin>>n;
    unordered_map<int,vector<int>> indices;
    indices.reserve(6);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        indices[temp].push_back(i);
    }
    for(auto &i:indices)
    {
        for(int j=0;j<i.second.size();j++)
            for(int k=j+1;k<i.second.size();k++)
                min=std::min(min,abs(i.second[k]-i.second[j]));
         
    }
    if(min==INT_MAX)
        cout<<-1;
    else
        cout<<min;
    return 0;
}
