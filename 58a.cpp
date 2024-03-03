#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,d,c=0;
    string s,f="hello";
    cin>>s;
    d=s.length();

    for(i=0;i<d;i++){
            if(s[i]==f[j])
            {
              c++;
              j++;
            }
    }
  if(c==5)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


}
