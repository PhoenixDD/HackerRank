#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int start=5,n,total=2;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        start=(start/2)*3;
        total+=(start/2);
    }
    cout<<total;
    return 0;
}
