#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m[100000],c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m[i];
    }
    for(i=0;i<n;i++){
      if(m[i]!=m[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
