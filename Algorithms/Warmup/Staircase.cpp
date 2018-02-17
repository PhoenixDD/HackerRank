#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=t-1;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}
