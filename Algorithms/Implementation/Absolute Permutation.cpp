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
    int t;
    cin >> t;
    vector<bool> used;
    vector<int> result;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int k;
        cin>>n>>k;
        used.clear();
        used.resize(n+1,false);
        result.clear();
        result.resize(n+1,false);
        for(int i=1;i<=n;i++)
        {
            if(i-k>0&&!used[i-k])
            {
                used[i-k]=true;
                result[i]=i-k;
            }
            else if(i+k<=n&&!used[i+k])
            {
                used[i+k]=true;
                result[i]=i+k;
            }
            else
            {
                cout<<-1<<endl;
                goto end;
            }
        }
        for(int i=1;i<=n;i++)
            cout<<result[i]<<" ";
        cout<<endl;
        end:;
    }
    return 0;
}
