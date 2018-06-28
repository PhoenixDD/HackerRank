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
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++)
       cin >> c[c_i];
    sort(c.begin(),c.end());
    int maxi=0,pos;
    if(c[0]!=0)
        maxi=max(c[0],maxi);
    for(int i=1;i<m;i++)
    {
        if(c[i]-c[i-1]!=1)
            maxi=max(maxi,min(c[i]-(c[i]+c[i-1])/2,(c[i]+c[i-1])/2-c[i-1]));
    }
    if(c[m-1]!=n-1)
        maxi=max(maxi,n-c[m-1]-1);
    cout<<maxi;
    return 0;
}
