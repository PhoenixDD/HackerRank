#include <iostream>
#include <vector>
#include <climits>
#include <stack>
using namespace std;
vector<vector<int>> memo;
int LCS(vector<int> &A,vector<int> &B,int i,int j)
{
    if(i==-1||j==-1)
        return 0;
    else if(memo[i][j]!=-1)
        return memo[i][j];
    else if(A[i]==B[j])
        return memo[i][j]=LCS(A,B,i-1,j-1)+1;
    else
        return memo[i][j]=max(LCS(A,B,i-1,j),LCS(A,B,i,j-1));
}
int main()
{
    stack<int> result;
    int N,M;
    cin>>N>>M;
    vector<int> A(N),B(M);
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<M;i++)
        cin>>B[i];
    memo.resize(N);
    for(int i=0;i<N;i++)
        memo[i].resize(M,-1);
    LCS(A,B,N-1,M-1);
    int i=N-1,j=M-1;
    while(i>=0&&j>=0)
    {
        if(A[i]==B[j])
        {
            result.push(A[i]);
            i--;j--;
        }
        else if(i>0&&j>0&&memo[i-1][j]>memo[i][j-1])
            i--;
        else if(i>0&&j>0&&memo[i-1][j]<memo[i][j-1])
            j--;
        else if(i>0)
            i--;
        else
            j--;
    }
    while(!result.empty())
    {
        cout<<result.top()<<" ";
        result.pop();
    }
}