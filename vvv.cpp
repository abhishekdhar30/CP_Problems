#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll q[n],w[n];
    for(ll i=0;i<n;i++)

        cin>>q[i]>>w[i];

    ll m=1;
    ll index=0;
    bool f=0;
    ll dist=0;
    ll count=0;
    while(a>dist)
    {
        f=0;
    for(ll i=0;i<n;i++)
    {
       if(m==q[i])
       {
         index=i;
         f=1;
         break;
       }
       
    }
    m++;
    if(f==1)
    {
        dist+=w[index];
    }
    else
     dist+=b;
     count++;
   
    }
    cout<<count<<endl;
}
