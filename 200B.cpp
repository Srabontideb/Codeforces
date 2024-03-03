#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[100],i;
    double c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        c+=p[i];
    }
    c=c/n;
    cout<<(double)c<<endl;
}
