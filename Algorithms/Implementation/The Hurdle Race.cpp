#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,h;
    cin>>n>>k;
    int max=k;
    while(n--)
        {
        cin>>h;
        if(h>max)
            max=h;
    }
    cout<<max-k;
    return 0;
}
