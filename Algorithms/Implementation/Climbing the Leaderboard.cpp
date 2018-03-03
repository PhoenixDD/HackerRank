#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,m,duplicates=0;
    cin>>n;
    vector<long> scores(n);
    cin>>scores[0];
    for(int i=1;i<n;i++)
    {
        cin>>scores[i];
        if(scores[i]==scores[i-1])
            duplicates++;
    }
    cin>>m;
    int current_rank=n-duplicates+1,pointer=n-1;
    long current_score;
    for(int i=0;i<m;i++)
    {
        cin>>current_score;
        while(pointer>=0&&current_score>=scores[pointer])
        {
            pointer--;
            if(pointer<n-1&&scores[pointer]!=scores[pointer+1])
                current_rank--;
        }
        cout<<current_rank<<endl;
    }
    return 0;
}
