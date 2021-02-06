#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define LCM(a, b)       (a * b) / GCD(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

int main(void){
    boost;

   ll a,t,b,c,d,k,r,n,m,x,y,even1=0,odd1=0,f=0,even=0,odd=0;
        //cin>>t;
read:
    set<int>s;
    map<ll,ll>mp;

    cin>>n>>m;

    ll ar[n+5],br[m+5];

    for(int i=1; i<=n; i++){
        cin>>ar[i];

        if(ar[i]%2==0) even++;
        else odd++;
    }
    for(int i=1; i<=m; i++){
        cin>>br[i];

        if(br[i]%2==0) even1++;
        else odd1++;
    }
    cout<<min(even,odd1)+min(odd,even1)<<nl;
}

