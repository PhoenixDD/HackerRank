#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s)
{
    string sos="SOS";
    int count=0;
    for(int i=0,j=0;i<s.length();i++,j++,j%=3)
    {
        if(s[i]!=sos[j])
            count++;
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}