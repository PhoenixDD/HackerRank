#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }
        set<long long> ball,containers;
        long long ball_sum,containers_sum;
        for(int i=0;i<n;i++)
        {
            ball_sum=containers_sum=0;
            for(int j=0;j<n;j++)
            {
                containers_sum+=M[i][j];
                ball_sum+=M[j][i];
            }
            ball.insert(ball_sum);
            containers.insert(containers_sum);
        }
        if(ball==containers)
                cout<<"Possible"<<endl;
            else
                cout<<"Impossible"<<endl;
    }
    return 0;
}