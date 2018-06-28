#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<vector<char>> map(n,vector<char>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>map[i][j];
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<n;j++)
        {
            if(i>0&&j>0&&i<n-1&&j<n-1&&map[i][j]>map[i][j-1]&&map[i][j]>map[i-1][j]&&map[i][j]>map[i][j+1]&&map[i][j]>map[i+1][j])
                cout<<'X';
            else
                cout<<map[i][j];      
        }
        cout<<endl;
    }
    return 0;
}
