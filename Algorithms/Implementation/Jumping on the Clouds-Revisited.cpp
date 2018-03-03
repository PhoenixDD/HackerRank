#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int k,n,energy=0,pos=0,temp;
    cin>>n>>k;
    vector<bool> clouds(n);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        clouds[i]=temp;
    }
    do
    {
        pos=(pos+k)%n;
        energy++;
        if(clouds[pos])
            energy+=2;
    }while(pos!=0);
    cout<<100-energy;
    return 0;
}
