#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a(3),b(3);
    int A=0,B=0;
    for(int i=0;i<6;i++)
    {
        if(i<3)
            cin>>a[i];
        else
            cin>>b[i%3];
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]<b[i])
            B++;
        else if(a[i]>b[i])
            A++;
    }
    cout<<A<<" "<<B;
    return 0;
}
