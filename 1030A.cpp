#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,p[100],c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        c=c+p[i];
    }
    if(c==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
}
