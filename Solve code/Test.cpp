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

   ll a,t,b,c,d,k,r,n,m,x,y;
        cin>>t;
    string s;

read:
    while(t--){
        cin>>n>>k;

        ll ans;
            ans=(n-k)+(k/2);

        if(ans==0) cout<<"0"<<nl;
        else{
            cout<<ans<<nl;

            for(int i=k+1; i<=n; i++){
                cout<<i<<" ";
            }
            for(int j=k-1; j>=k-(k/2); j--){
                cout<<j<<" ";
            }
            cout<<nl;
        }
    }
}
