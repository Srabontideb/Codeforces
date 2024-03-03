#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            z=n/2-1;
        else
            z=n/2;
        cout<<z<<endl;
    }
}
