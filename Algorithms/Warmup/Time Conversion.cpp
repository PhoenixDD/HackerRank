#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,hr,min,sec,type;
    cin>>a;
    hr=a.substr(0,2);
    min=a.substr(3,2);
    sec=a.substr(6,2);
    type=a.substr(8,2);
    if(type=="PM"&&hr!="12")
        cout<<stoi(hr)+12<<":"<<min<<":"<<sec;
    else if(type=="AM"&&hr!="12")
        cout<<hr<<":"<<min<<":"<<sec;
    else if(type=="AM"&&hr=="12")
        cout<<"00"<<":"<<min<<":"<<sec;
    else
        cout<<hr<<":"<<min<<":"<<sec;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
