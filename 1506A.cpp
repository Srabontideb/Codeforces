#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,x,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        z=(((x-1)%n)*m+((x-1)/n)+1);
        cout<<z<<endl;
    }
}
