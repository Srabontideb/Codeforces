#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d,c=0;
    string s;
    cin>>n;
    cin>>s;
    d=s.length();
   for(i=0;i<d;i++)
   {
      if(s[i]==s[i+1])
      {
         c++;
      }
   }
   cout<<c;
}
