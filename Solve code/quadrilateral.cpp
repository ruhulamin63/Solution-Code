#include<bits/stdc++.h>
#define ll     long long int
#define nl     '\n'
#define pi     acos(-1)
#define m      100001

using namespace std;

int main(void){

  ll t,k,n,b,c,mi=0,mx=0,ans=0,po=0,ne=0,cnt=0,sum=0;

    cin>>n;
read:
    vector<ll>ar;

    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
          ar.push_back(i);
          if(n/i!=i){
            ar.push_back(n/i);
          }
        }
      }
      sort(ar.begin(),ar.end());

      for(ll result : ar){
        cout<<result<<nl;
      }
}
