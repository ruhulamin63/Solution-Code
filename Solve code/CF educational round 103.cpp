

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

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=0,ans=0;
        cin>>t;
read:
    while(t--){
        cin>>n>>m;

        ans=0;

        if(n>m){
            if(n%m==0) ans=(n/m)*m;
            else ans=(n/m+1)*m;

            if(ans%n) cout<<ans/n+1<<nl;
            else cout<<ans/n<<nl;
        }
        else{
            if(m%n==0) cout<<m/n<<nl;
            else cout<<m/n+1<<nl;
        }
    }
}
