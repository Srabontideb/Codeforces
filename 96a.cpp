#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,d,c=1;
    cin>>s;
    d=s.length();
    for(i=0; i<d; i++)
    {
        for(j=i+1; j<d; j++)
        {
            if(s[i]==s[j])
            {

                c++;
            }

            else
                break;
        }
        if(c>=7)
        {
            cout<<"YES"<<endl;
            break;
        }
        else
        {
            c=1;
            continue;
        }
    }
    if(c<7)
        cout<<"NO"<<endl;
}
