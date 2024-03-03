#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],j,c=0,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s=0;
      for(j=0;j<3;j++)
      {
             cin>>a[j];
             s=s+a[j];
      }
      if(s>1)
        c++;
    }

   cout<<c<<endl;
}
