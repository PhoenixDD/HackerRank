#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main()
{
    int N,M,count,max=numeric_limits<int>::min(),num;
    cin>>N>>M;
    vector<string> people(N);
    for(int i=0;i<N;i++)
        cin>>people[i];
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
        {
            count=0;
            for(int k=0;k<M;k++)
                if(people[i][k]=='1'||people[j][k]=='1')
                    count++;
            if(count>max)
            {
                num=1;
                max=count;
            }
            else if(count==max)
                num++;
        }
    cout<<max<<endl<<num;
    return 0;
}