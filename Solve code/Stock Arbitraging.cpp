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
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,mi=1005,ans;
        cin>>n>>m>>x;
read:
    ll ar[n+5],br[m+5];

    for(int i=1; i<=n; i++){
        cin>>ar[i];

        mi=min(mi,ar[i]);
    }
    for(int j=1; j<=m; j++){
        cin>>br[j];

        mx=max(mx,br[j]);
    }

    if(mi>=mx) cout<<x;
    else{
        ans=x/mi;

        cout<<x+(ans*(mx-mi));
    }
}

