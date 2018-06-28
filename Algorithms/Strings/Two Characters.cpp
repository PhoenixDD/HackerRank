#include <bits/stdc++.h>

using namespace std;

int check(string &s,char &a,char &b)
{
    int length=0;
    char last='.';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==a||s[i]==b)
        {
            if(s[i]==last)
                return 0;
            length++;
            last=s[i];
        }
    }
    return length;
}
int twoCharaters(string &s)
{
    int length;
    vector<char> v;
    v.reserve(26);
    vector<bool> exist(26,false);
    for(int i=0;i<s.length();i++)
    {
        if(!exist[s[i]-'a'])
            v.push_back(s[i]);
        exist[s[i]-'a']=true;
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            length=max(check(s,v[i],v[j]),length);
        }
    }
    return length;
}

int main() {
    int l;
    cin >> l;
    string s;
    cin >> s;
    int result = twoCharaters(s);
    cout << result << endl;
    return 0;
}
