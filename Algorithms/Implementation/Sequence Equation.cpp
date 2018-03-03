#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N,count=0;
    cin>>N;
    vector<int> arr(N+1),arr2(N+1);
    for(int i=1;i<=N;i++)
        cin>>arr[i];
    for(int i=1;i<=N;i++)
        arr2[arr[arr[i]]]=i;
    for(int i=1;i<=N;i++)
        cout<<arr2[i]<<endl;
    return 0;
}
