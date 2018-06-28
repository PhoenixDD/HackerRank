#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    string w;
    w.reserve(100);
    while(t--)
    {
        w.clear();
        cin>>w;
        for(int i=w.length()-1;i>0;i--)
        {
            if(w[i]>w[i-1])
            {
                for(int j=w.length()-1;j>=i;j--)
                    if(w[j]>w[i-1])
                    {
                        swap(w[j],w[i-1]);
                        break;
                    }
                reverse(w.begin()+i,w.end());
                cout<<w<<endl;
                goto skip;
            }
        }
        cout<<"no answer"<<endl;
        skip:;
    }
    return 0;
}