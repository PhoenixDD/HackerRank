#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N,T,from,to;
    cin>>N>>T;
    vector<int> lane(N);
    for(int i=0;i<N;i++)
        cin>>lane[i];
    while(T--)
    {
        cin>>from>>to;
        cout<<*min_element(lane.begin()+from,lane.begin()+to+1)<<endl;
    }
    return 0;
}
