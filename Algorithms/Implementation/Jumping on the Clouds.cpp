#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,count=0;
    cin>>n;
    vector<int> clouds(n);
    for(int i=0;i<n;i++)
        cin>>clouds[i];
    for(int i=0;i<n;i++)
    {
        if(i+2<n&&!clouds[i+2])
        {
            i++;
            count++;
        }
        else if(i+1<n)
            count++;
    }
    cout<<count;
    return 0;
}