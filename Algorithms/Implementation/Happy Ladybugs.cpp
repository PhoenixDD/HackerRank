#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        bool blank=false,joint;
        vector<int> color(26,0);
        for(int i=0;i<b.length();i++)
        {
            if(b[i]=='_')
                blank=true;
            else
                color[b[i]-'A']++;
        }
        for(int i=0;i<b.length();i++)
        {
            joint=false;
            while(b[i]==b[i+1])
            {
                joint=true;
                i++;
            }
            if(!joint)
                break;
        }
        if(joint)
        {
            cout<<"YES"<<endl;
            goto end;
        }
        else if(!blank)
        {
            cout<<"NO"<<endl;
            goto end;
        }
        else
            for(int i=0;i<26;i++)
                if(color[i]==1)
                {
                    cout<<"NO"<<endl;
                    goto end;
                }
    cout<<"YES"<<endl;
    end:;
    }
    return 0;
}
