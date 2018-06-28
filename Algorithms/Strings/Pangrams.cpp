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
int main()
{
    char c;
    vector<bool> occured(26,false);
    int count=0;
    while(cin>>c)
    {
        if(!occured[tolower(c)-'a'])
        {
            occured[tolower(c)-'a']=true;
            count++;
        }
        if(count==26)
        {
            cout<<"pangram";
            goto end;
        }
    }
    cout<<"not pangram";    
    end:;
    return 0;
}