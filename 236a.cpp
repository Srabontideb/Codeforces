#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,d,c=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s;
    d=s.length();
    for(i=0;i<d;i++)
    {
         if(s[i]!=s[i+1])
            c++;
    }
if(c%2==0)
    cout<<"CHAT WITH HER!"<<endl;
else
    cout<<"IGNORE HIM!"<<endl;
}
