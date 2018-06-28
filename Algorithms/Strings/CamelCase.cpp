#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int count=0;
    for(auto &c:s)
    {
        if(c>='A'&&c<='Z')
            count++;
    }
    return count+1;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}