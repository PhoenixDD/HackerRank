#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N,grade;
    cin>>N;
    while(N--)
    {
        cin>>grade;
        if(grade<38||grade%5<=2)
            cout<<grade<<endl;
        else
            cout<<grade+(5-grade%5)<<endl;
    }
    return 0;
}
