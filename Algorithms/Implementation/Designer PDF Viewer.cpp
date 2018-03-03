#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> heights(26);
    for(int i=0;i<26;i++)
        cin>>heights[i];
    string word;
    cin>>word;
    int max=0;
    for(char &i:word)
        max=std::max(heights[(int)i-'a'],max);
    cout<<max*word.length();
    return 0;
}
