#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,d,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        d=q-p;
        if(d>2 || d==2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
