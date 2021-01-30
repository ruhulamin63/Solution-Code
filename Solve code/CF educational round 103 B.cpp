

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

    ll t,a,n,m,x,b,c,d,e,mxfd,cnt,sum;
        cin>>t;
read:
    while(t--){
        cin>>n>>m;

        ll ar[n+5];
        sum=0;

        for(int i=1; i<=n; i++){
            cin>>ar[i];

            sum +=ar[i];
        }
        cout<<sum%(100-m)<<nl;
    }
}

