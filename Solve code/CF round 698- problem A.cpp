
#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

int main(void){
    boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=0,cnt1=0;
        cin>>t;
read:
    while(t--){
        cin>>n;

        ll ar[n+5];
        map<ll,ll>mp;

        mx=0;

        for(int i=1; i<=n; i++){
            cin>>ar[i];

            mp[ar[i]]++;
        }

        for(int i=1; i<=n; i++){
            //cout<<mp[ar[i]]<<" ";

            mx=max(mx,mp[ar[i]]);
        }
       // cout<<nl;
        cout<<mx<<nl;
    }
}
