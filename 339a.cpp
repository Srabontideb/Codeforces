#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,temp;
    cin>>s;
    k=s.length();
    for(i=0;i<k;i=i+2)
    {
for(j=i+2;j<k;j=j+2)
{
    if(s[i]>s[j])
    {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    }
}
    }
    for(i=0;i<k;i++)
    {
        cout<<s[i];
    }
}
