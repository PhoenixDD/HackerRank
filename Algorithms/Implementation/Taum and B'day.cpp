#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    long B,W,X,Y,Z;
    cin>>T;
    while(T--)
    {
        cin>>B>>W>>X>>Y>>Z;
        if(Z+Y<X||Z+X<Y)
                cout<<min(W*X+W*Z+B*X,B*Y+Z*B+W*Y)<<endl;
        else
            cout<<X*B+Y*W<<endl;
    }
    return 0;
}