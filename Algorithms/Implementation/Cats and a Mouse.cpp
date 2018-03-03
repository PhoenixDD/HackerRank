#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,c1,c2,m;
    cin>>t;
    while(t--)
    {
        cin>>c1>>c2>>m;
        if(abs(m-c1)==abs(m-c2))
            cout<<"Mouse C"<<endl;
        else
            cout<<((min(abs(m-c1),abs(m-c2))==abs(m-c2))?"Cat B":"Cat A")<<endl;
    }
    return 0;
}
