#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,h,a,c=0;
    cin>>n>>h;
   for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            c++;
        }
    }
    c=c+n;
 cout<<c<<endl;
    }
