#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,i;
    string o;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>o;
        if(o[1]=='+')
        {
            x++;
        }
        else{
            x--;
        }
    }
cout<<x<<endl;
}
