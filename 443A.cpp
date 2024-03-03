#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char s1;
    int i;
    getline(cin,s);
    set<char>Set;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            Set.insert(s[i]);
        }
    }
    cout<<Set.size()<<endl;
}
