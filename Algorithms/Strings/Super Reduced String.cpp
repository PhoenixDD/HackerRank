#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    int pos;
    string res;
    res.resize(s.length());
    while(1)
    {
        pos=0;
        for(int i=0;i<s.length();i++)
            if(i+1<s.length()&&s[i]==s[i+1])
                i++;
            else
                res[pos++]=s[i];
        res.resize(pos);
        if(res==s)
            break;
        s=res;
    }
    if(res=="")
        return "Empty String";
    return res;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
