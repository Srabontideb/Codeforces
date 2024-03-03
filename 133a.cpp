#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=33 && s[i]<=126)
        {
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            {
                c=1;
            }
        }
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
