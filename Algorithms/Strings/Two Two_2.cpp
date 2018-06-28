#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
#define no_of_char 10
#define base_char '0'
using namespace std;
struct Node
{
    vector<Node*> letters;
    bool isleaf=false;
    Node *fall;
}Root;
long long int counter=0;
string text,temp_string="";
char temp_char;
Node* temp_Node;
bool isfall=false;
void make_trie(Node *root,string *word,int cur_pos,int *word_length)
{
    if(cur_pos<*word_length)
    {
        if(root->letters[(*word).at(cur_pos)-base_char]==NULL)
        {
            root->letters[(*word).at(cur_pos)-base_char]=new Node;
            root->letters[(*word).at(cur_pos)-base_char]->letters.resize(no_of_char);
            make_trie(root->letters[(*word).at(cur_pos)-base_char],word,cur_pos+1,word_length);
        }
        else
            make_trie(root->letters[(*word).at(cur_pos)-base_char],word,cur_pos+1,word_length);
        if(cur_pos==*word_length-1)
            root->letters[(*word).at(cur_pos)-base_char]->isleaf=true;
    }
}
void failure()
{
    for(int i=0;i<no_of_char;i++)
        if(Root.letters[i]==NULL)
            Root.letters[i]=&Root;
    queue<Node*> q;
    for(int i=0;i<no_of_char;i++)
    {
        if(Root.letters[i]!=&Root)
        {
            Root.letters[i]->fall=&Root;
            q.push(Root.letters[i]);
        }
    }
    while(!q.empty())
    {
        Node *state=q.front();
        q.pop();
        for(int i=0;i<no_of_char;i++)
        {
            if(state->letters[i]!=NULL)
            {
                Node* fail=state->fall;
                while(fail->letters[i]==NULL)
                    fail=fail->fall;
                fail=fail->letters[i];
                state->letters[i]->fall=fail;
                q.push(state->letters[i]);
            }
        }
    }
}
void searchit(Node* curr,string::const_iterator it)
{
    if(!isfall)
    {
        temp_Node=curr;
        while(temp_Node!=&Root)
        {
            if(temp_Node->isleaf)
                counter++;
            temp_Node=temp_Node->fall;
        }
    }
    isfall=false;
    if(it!=text.end())
    {
        temp_char=*it;
        if(curr->letters[temp_char-base_char]!=NULL)
        {
            searchit(curr->letters[temp_char-base_char],++it);
        }
        else
        {
            isfall=true;
            searchit(curr->fall,it);
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
    Root.letters.resize(no_of_char);
    Root.fall=&Root;
    for(int i=0;i<63;i++)
    {
        temp=pow(2,i);
        temp_string=to_string(temp);
        length=temp_string.length();
        make_trie(&Root,&temp_string,0,&length);
    }
    for(int i=63;i<=800;i++)
    {
        reverse(temp_string.begin(),temp_string.end());
        multiply();
        reverse(temp_string.begin(),temp_string.end());
        length=temp_string.length();
        make_trie(&Root,&temp_string,0,&length);
    }
    failure();
    cin>>T;
    for(int i=0;i<T;i++)
    {
        counter=0;
        cin>>text;
        searchit(&Root,text.begin());
        cout<<counter<<endl;
    }
}