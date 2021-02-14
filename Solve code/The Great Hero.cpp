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

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=0;
        cin>>t;
read:
    while(t--){
        cin>>a>>b>>n;

        pair<ll,ll>p[n+5];

        for(ll i=0; i<n; i++){
            cin>>p[i].first;
        }
        for(ll i=0; i<n; i++){
            cin>>p[i].second;
        }
        sort(p,p+n);

        ll ans=0;
        bool check=false;

        for(ll i=0; i<n; i++){
            //cout<<p[i].first<<" ";
            if(p[i].second%a==0)
                ans=(p[i].second/a);
            else
                ans=(p[i].second/a)+1;

            b -=(ans-1)*p[i].first;

            if(b<=0){
                check=true;
                break;
            }
            if(i+1!=n){
                 b -=p[i].first;
                if(b<=0){
                    check=true;
                    break;
                }
            }
        }
        //cout<<b<<nl;
        if(check) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
/*
1
3 17 1
2
16
*/
