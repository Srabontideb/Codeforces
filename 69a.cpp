#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, s[100],t[100],u[100],a=0,b=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i]>>t[i]>>u[i];
   a=a+s[i];
   b=b+t[i];
   c=c+u[i];
    }
    if(a==0 && b==0 && c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
