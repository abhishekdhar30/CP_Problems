#include<bits/stdc++.h>
using namespace std;
#define ll long long
//cdnovjd
int main()
{
   ll a,b,c;
   cin>>a>>b>>c;
   ll num=a;
   bool f=0;
   ll m=0;
   for(ll j=1;j<=1;j++)
   {
       num=num*10;
       m=num;
      for(ll i=1;i<=9;i++)
     {
        num+=i;
        if(num%b==0)
        {
            f=1;
            break;
        }
        else
        {
            num-=i;
        }
     }
    //  if(m==num)
    //   num=-1;
   }
  ll no=0;
   for(ll i=2;i<=9;i++)
   {
       if(b%i==0)
    {
        no=i;
        break;
    }
   }
      cout<<num;
      for(ll j=0;j<c-1;j++)
       cout<<no;
   
}
