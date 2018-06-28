#include<iostream>
#include<queue>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define no_of_char 10
#define base_char '0'
int go[100000][no_of_char],out[100000]={0},f[100000],states=1;
bool isfail=false;
char temp_char;
long long int counter=0;
string text,temp_string="";
void make_trie()
{
        int curr=0;
        for(auto ch:temp_string)
        {
            if(go[curr][ch-base_char]==-1)
                go[curr][ch-base_char]=states++;
            curr=go[curr][ch-base_char];
        }
        out[curr]++;
}
void failure()
{
    for(int ch=0;ch<no_of_char;ch++)
        if(go[0][ch]==-1)
            go[0][ch]=0;
    queue<int> q;
    for(int ch=0;ch<no_of_char;ch++)
    {
        if(go[0][ch]!=0)
        {
            f[go[0][ch]]=0;
            q.push(go[0][ch]);
        }

    }
    while(!q.empty())
    {
        int state=q.front();
        q.pop();
        for(int i=0;i<no_of_char;i++)
        {
            if(go[state][i]!=-1)
            {
                int fail=f[state];
                while(go[fail][i]==-1)
                    fail=f[fail];
                fail=go[fail][i];
                f[go[state][i]]=fail;
                out[go[state][i]]+=out[fail];
                q.push(go[state][i]);
            }
        }
    }
}
void searchit(int curr,string::const_iterator it)
{
    if(!isfail)
        counter+=out[curr];
    isfail=false;
    if(it!=text.end())
    {
        temp_char=*it;
        if(go[curr][temp_char-base_char]!=-1)
            searchit(go[curr][temp_char-base_char],++it);
        else
        {
            isfail=true;
            searchit(f[curr],it);
        }
    }
}
void multiply()
{
    int temp=0,carry=0,len=temp_string.length();
    for(int i=0;i<len;i++)
    {
        temp=(((int)temp_string[i]-'0')*2)+carry;
        if(temp>9)
            carry=temp/10;
        else
            carry=0;
        temp%=10;
        temp_string[i]=(char)temp+'0';
        if(i==len-1)
            if(carry!=0)
            {
                temp_string+=(int)carry+'0';
                break;
            }

    }
}
int main()
{
    long long int temp=0;
    int T,length;
    memset(go, -1, sizeof go);
    for(int i=0;i<63;i++)
    {
        temp=pow(2,i);
        temp_string=to_string(temp);
        make_trie();
    }
    for(int i=63;i<=800;i++)
    {
        reverse(temp_string.begin(),temp_string.end());
        multiply();
        reverse(temp_string.begin(),temp_string.end());
        make_trie();
    }
    failure();
    cin>>T;
    for(int i=0;i<T;i++)
    {
        counter=0;
        cin>>text;
        searchit(0,text.begin());
        cout<<counter<<endl;
    }
}
