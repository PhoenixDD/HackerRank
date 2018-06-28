#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int M,N,R,ele_in_layer,shift,pos,index,curr_M,curr_N;
    cin>>M>>N>>R;
    vector<vector<int>> matrix(M,vector<int>(N));
    vector<int> curr_layer,shifted;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>matrix[i][j];
    curr_M=M,curr_N=N;
    for(int layer=0;;layer++)
    {
        if(curr_M<1||curr_N<1)
            break;
        else if(curr_M>1&&curr_N>1)
            ele_in_layer=2*curr_N+2*(curr_M-2);
        else if(curr_N==1&&curr_M>1)
            ele_in_layer=curr_M;
        else if(curr_N>1&&curr_M==1)
            ele_in_layer=curr_N;
        else if(curr_M==1&&curr_N==1)
            ele_in_layer=1;
        curr_M-=2;
        curr_N-=2;
        shift=R%ele_in_layer;
        curr_layer.resize(ele_in_layer);
        shifted.resize(ele_in_layer);
        pos=0;
        for(int j=layer;j<N-layer;j++)
            curr_layer[pos++]=matrix[layer][j];
        for(int i=layer+1;i<M-layer;i++)
            curr_layer[pos++]=matrix[i][N-layer-1];
        for(int j=N-layer-2;j>=layer;j--)
            curr_layer[pos++]=matrix[M-layer-1][j];
        for(int i=M-layer-2;i>layer;i--)
            curr_layer[pos++]=matrix[i][layer];
        for(int i=0;i<ele_in_layer;i++)
        {
            index=i-shift;
            if(index<0)
                index+=ele_in_layer;
            shifted[index]=curr_layer[i];
        }
        pos=0;
        for(int j=layer;j<N-layer;j++)
            matrix[layer][j]=shifted[pos++];
        for(int i=layer+1;i<M-layer;i++)
            matrix[i][N-layer-1]=shifted[pos++];
        for(int j=N-layer-2;j>=layer;j--)
            matrix[M-layer-1][j]=shifted[pos++];
        for(int i=M-layer-2;i>layer;i--)
            matrix[i][layer]=shifted[pos++];
        ele_in_layer-=8;
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
