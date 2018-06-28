#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k)
{
    k%=26;
    for(auto &i:s)
    {
        if(i>='a'&&i<='z')
            i='a'+((i+k-'a')%26);
        else if(i>='A'&&i<='Z')
            i='A'+((i+k-'A')%26);
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = caesarCipher(s, k);
    cout << result << endl;
    return 0;
}