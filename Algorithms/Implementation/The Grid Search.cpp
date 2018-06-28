#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
    for(int i=0;i<=G.size()-P.size();i++)
    {
        for(int j=0;j<=G[0].size()-P[0].size();j++)
        {
            if(G[i][j]==P[0][0])
            {
                for(int _i=i;_i-i<P.size();_i++)
                {
                    for(int _j=j;_j-j<P[0].size();_j++)
                    {
                        if(G[_i][_j]!=P[_i-i][_j-j])
                            goto breaker;
                    }
                }
                cout<<"YES"<<endl;
                goto end;
            }
            breaker:;
        }
    }
    cout<<"NO"<<endl;
    end:;
    }
    return 0;
}