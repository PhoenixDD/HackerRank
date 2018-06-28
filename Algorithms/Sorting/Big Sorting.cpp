#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool myfunction (string i,string j)
{
    if(i.length()!=j.length())
        return (i.length()<j.length());
    else
        for(int k=0;k<i.length();k++)
        {
            if(i[k]==j[k])
                continue;
            else
                return i[k]<j[k];
        }
    return false;
}

int main()
{
    int t;
    cin>>t;
    vector<string> str(2e5);
    for(int i=0;i<t;i++)
        cin>>str[i];
    sort(str.begin(),str.begin()+t,myfunction);
    for(int i=0;i<t;i++)
        cout<<str[i]<<endl;
    return 0;
}