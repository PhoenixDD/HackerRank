#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> squares;
    for(int i=1;i<=sqrt(1e9);i++)
        squares.push_back(i*i);
    int T,A,B,start,end;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        start=lower_bound(squares.begin(),squares.end(),A)-squares.begin();
        end=lower_bound(squares.begin(),squares.end(),B)-squares.begin();
        end=squares[end]==B?end:end-1;
        cout<<end-start+1;
        cout<<endl;
    }
    return 0;
}