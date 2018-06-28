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
#include <unordered_set>
using namespace std;


int main(){
    string s;
    cin >> s;
    int count=1;
    unordered_set<int> weights(100000);
    weights.insert(s[0]-'a'+1);
    for(int i=1;i<s.length();i++)
    {
        while(s[i]==s[i-1])
        {
            count++;
            weights.insert(count*(s[i]-'a'+1));
            i++;
        }
        weights.insert(s[i]-'a'+1);
        count=1;
    }
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        if(weights.find(x)!=weights.end())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}