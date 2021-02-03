#include<bits/stdc++.h>
#define ll              long long int
#define nl              '\n'
#define pi acos(-1)
#define m 101

using namespace std;

//ll a[100001],b[100001];

int main(void){

    ll t,n,ans=0;
        cin>>t;

    ans = 256-244;

   if( t%4==0 && t%100 != 0 || t%400==0 ){
        cout<<ans<<"."<<"09"<<"."<<t<<nl;
   }
   else{
        cout<<ans+1<<"."<<"09"<<"."<<t;
   }
}
