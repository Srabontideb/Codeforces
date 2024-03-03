#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,c=0,x,y=0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
        c=i*k;
        y=y+c;
    }
    x=y-n;
    if(y<n)
    {
        cout<<"0"<<endl;
    }
    else
     cout<<x<<endl;
}
