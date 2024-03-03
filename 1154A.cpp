#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,x2,x3,ans[4],s;
    for(int i=0;i<4;i++)
    {
        cin>>ans[i];
    }
    sort(ans,ans+4);
    x1=ans[3]-ans[0];
    x2=ans[3]-ans[1];
    x3=ans[3]-ans[2];
    cout<<x1<<" "<<x2<<" "<<x3<<endl;
}
