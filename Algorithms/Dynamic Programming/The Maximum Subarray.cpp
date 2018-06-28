#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<int> vec(N);
        for(int i=0;i<N;i++)
            cin>>vec[i];
        long long sum=0,max=LLONG_MIN;
        for(int i=0;i<N;i++)
        {
           sum+=vec[i];
            if(max<sum)
                max=sum;
            if(sum<0)
                sum=0;
        }
        cout<<max<<" ";
        sum=0,max=LLONG_MIN;
        for(int i=0;i<N;i++)
        {
            if(sum+vec[i]>sum)
                sum+=vec[i];
            if(vec[i]>max)
                max=vec[i];
        }
        if(sum==0)
            cout<<max<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}