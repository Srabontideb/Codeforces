#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i;
    int sum=0;
    cin>>k>>n>>w;
     sum=sum+k*w*(w+1)/2;
     int z=sum-n;
    if(sum<=n)
        cout<<"0"<<endl;
  else
    cout<<z<<endl;
}
