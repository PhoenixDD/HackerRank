#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string str;
    long n,count=0;
    cin>>str>>n;
    count=std::count(str.begin(),str.end(),'a');
    count*=n/str.size();
    count+=std::count(str.begin(),str.begin()+n%str.size(),'a');
    cout<<count;
    return 0;
}