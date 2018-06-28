#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    int N,R,C;
    cin>>R>>C>>N;
    vector<vector<char>> grid(R,vector<char>(C)),temp(R,vector<char>(C));
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>grid[i][j];
    if(!(N%2))
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                grid[i][j]='O';
    else if(N==1);
    else
        for(int t=1;t<N%4+4;t+=2)
        {
            for(int i=0;i<R;i++)
                for(int j=0;j<C;j++)
                    if(grid[i][j]=='O'||(i+1<R&&grid[i+1][j]=='O')||(i-1>=0&&grid[i-1][j]=='O')||(j+1<C&&grid[i][j+1]=='O')||(j-1>=0&&grid[i][j-1]=='O'))
                        temp[i][j]='.';
                    else
                        temp[i][j]='O';
            grid=temp;
        }
    for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
                cout<<grid[i][j];
            cout<<endl;
        }
    return 0;
}
