#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() 
{
    int arr[10000],t,N,temp;
    cin>>t;
    while(t--)
    {
        int sum[5]={0},min=INT_MAX;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
        for(int j=0;j<5;j++)
        {
            for(int i=0;i<N;i++)
            {           
                temp=abs(arr[i]-min+j);
                sum[j]+=temp/5+(temp%5)/2+(temp%5)%2;
            }
        }
        cout<<std::min({sum[0],sum[1],sum[2],sum[3],sum[4]})<<endl;
    }
    return 0;
}