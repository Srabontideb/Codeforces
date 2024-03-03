#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[100],i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
     cin>>j;
     p[j]=i;
    }
      for(i=1;i<=n;i++){
         cout<<p[i]<<" ";
      }
}
