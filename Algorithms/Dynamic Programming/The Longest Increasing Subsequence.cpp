#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> seq(N);
    vector<int> T(N,0);
    for(int i=0;i<N;i++)
        cin>>seq[i];
    int length=1,T_pos=1;
    T[0]=seq[0];
    for(int i=1;i<seq.size();i++)
    {
        if(seq[i]>T[T_pos-1])
        {
            length++;
            T[T_pos]=seq[i];
            T_pos++;
        }
        else if(seq[i]<T[0])
            T[0]=seq[i];
        else
            T[lower_bound(T.begin(),T.begin()+T_pos-1,seq[i])-T.begin()]=seq[i];
    }
    cout<<length;
}