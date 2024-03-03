#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,d=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            c++;
        else
            d++;
    }
    if(c>d)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;

}
