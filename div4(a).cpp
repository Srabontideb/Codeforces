#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     for(int j=0;j<t;j++)
     {
     int n,c;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]==c)
         {
             c++;
         }
         if(c=3)
         {
             cout<<i<<endl;
         }
         else
            cout<<"-1"<<endl;
     }
    c=0;
     }
 }

