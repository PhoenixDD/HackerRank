#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N,p;
    cin>>N>>p;
    if(p==N-1&&N%2==0&&N!=2)
        cout<<1;
    else if(p>N/2)
            cout<<(N-p)/2;
    else
        cout<<p/2;
    return 0;
}
