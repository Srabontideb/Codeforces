#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,c;
    string s;
    cin>>n>>t;
    while(n--)
    {
        cin>>s;
    }
    while(t--)
    {
    for(i=0;i<s.length();i++)
    {
     if(s[i]=='B' && s[i+1]=='G')
     {
         s[i]=s[i+1];
         cout<<s;
     }
    }
    }
}
