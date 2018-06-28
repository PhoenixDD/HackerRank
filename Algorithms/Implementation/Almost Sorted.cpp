#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void almost_sorted(vector<int> vec)
{
    int start,end,k;
    for(start=1;start<vec.size()&&vec[start-1]<vec[start];start++);
    if(start>=vec.size()-1)
    {
        cout<<"no";
        return;
    }
    swap(vec[start],vec[start-1]);
    if(is_sorted(vec.begin(),vec.end()))
    {
        cout<<"yes"<<endl<<"swap"<<" "<<start<<" "<<start+1;
        return;
    }
    else
    {
        swap(vec[start],vec[start-1]);
        for(end=start;end<vec.size()-1&&vec[end]<vec[end+1];end++);
        if(end==vec.size()-1)
        {
            cout<<"no";
            return;
        }
        end++;
        swap(vec[end],vec[start-1]);
        if(is_sorted(vec.begin(),vec.end()))
        {
            cout<<"yes"<<endl<<"swap"<<" "<<start<<" "<<end+1;
            return;
        }
        swap(vec[end],vec[start-1]);
    }
    for(start=1;start<vec.size()&&vec[start-1]<vec[start];start++);
    for(end=start;end<vec.size()&&vec[end]<vec[end-1];end++);
    if(start>1&&vec[end-1]<vec[start-2])
    {
        cout<<"no";
        return;
    }
    k=end;
    while(k<vec.size())
    {
        if(vec[k]<vec[k-1])
        {
            cout<<"no";
            return;
        }
        k++;
    }
    cout<<"yes"<<endl<<"reverse "<<start<<" "<<end;
    
}
int main()
{
    int N;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++)
        cin>>vec[i];
    int i;
    for(i=1;i<N;i++)
        if(vec[i]>vec[i-1])
            break;
    if(N==2&&vec[0]>vec[1])
        cout<<"yes"<<endl<<"swap"<<" "<<1<<" "<<2;
    else if(i!=N)
        almost_sorted(vec);
    else
        cout<<"no";
    return 0;
}
