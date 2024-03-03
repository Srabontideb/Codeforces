#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,step;
    cin>>t;
    while(t--)
    {
    cin>>n;
    if(n<=3)
        step=n-1;
   else
    step=(n%2)+2;
    cout<<step<<endl;
    }
   return 0;
}
