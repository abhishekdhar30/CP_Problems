#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
         cin>>a[i];
        sort(a,a+n,greater<ll>());
        ll firstposition=0,secondposition=0;
        firstposition+=a[0];
        for(ll i=1;i<n;i++)
        {
            if(firstposition<secondposition)
            {
                firstposition+=a[i];
            }
            else
            {
                secondposition+=a[i];
            }
            
        }
        cout<<max(firstposition,secondposition)<<endl;
    }
}