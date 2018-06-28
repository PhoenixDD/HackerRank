#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M,l1,l2,result=0;
    cin>>N>>M;
    vector<string> grid(N);
    for(int i=0;i<N;i++)
        cin>>grid[i];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            l1=0;
            while(i-l1>=0&&j-l1>=0&&i+l1<N&&j+l1<M&&grid[i-l1][j]=='G'&&grid[i][j-l1]=='G'&&grid[i][j+l1]=='G'&&grid[i+l1][j]=='G')
            {
                grid[i][j+l1]=grid[i+l1][j]=grid[i][j-l1]=grid[i-l1][j]='g';
                for(int k=0;k<N;k++)
                    for(int l=0;l<M;l++)
                    {
                        l2=0;
                        while(k-l2>=0&&l-l2>=0&&k+l2<N&&l+l2<M&&grid[k-l2][l]=='G'&&grid[k][l-l2]=='G'&&grid[k][l+l2]=='G'&&grid[k+l2][l]=='G')
                        result=max(result,(1+4*l1)*(1+4*l2)),l2++;
                    }
                l1++;    
            }
            l1=0;
            while(i-l1>=0&&j-l1>=0&&i+l1<N&&j+l1<M&&grid[i-l1][j]=='g'&&grid[i][j-l1]=='g'&&grid[i][j+l1]=='g'&&grid[i+l1][j]=='g')
                grid[i][j+l1]=grid[i+l1][j]=grid[i][j-l1]=grid[i-l1][j]='G',l1++;
       }
    cout<<result;
    return 0;
}
