#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
          cin>>a[i];
        }
        ll b=n*(n-1)/2;
        b=b-1;
        ll count=0;
        for(ll i=0;i<n-1;i++)
        {
          for(ll j=0;j<n-i-1;j++)
          {
              if(a[j]>a[j+1])
              {
                 ll temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                  count++;
              }
         }
         if(count>b)
              {
                break;
              }
        }
      if(count>b)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
      // addition done
    }
}
