#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c,n,m;
    cin>>c>>n>>m;
    vector<long> key(n),usb(m);
    long long max=-1;
    for(int i=0;i<n;i++)
        cin>>key[i];
    for(int i=0;i<m;i++)
        cin>>usb[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(key[i]+usb[j]<=c&&key[i]+usb[j]>max)
                max=key[i]+usb[j];
    cout<<max;
    return 0;
}
