#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,d;
    string s;
    cin>>s;
    d=s.length();
    for(i=0;i<d;i++)
    {
        if(s[i]<=91)
        s[i]=s[i]+32;
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        cout<<"."<<s[i];
    }
}
