#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int d,i;
    d=a.size();
    for(i=0;i<d;i++)
    {
        if(a[i]<=91)
        {
            a[i]=a[i]+32;
        }
          if(b[i]<=91)
        {
            b[i]=b[i]+32;
        }
    }
    if(a<b)
        cout<<-1<<endl;
    else if(a>b)
        cout<<1<<endl;
    else if(a==b)
        cout<<0<<endl;
}
