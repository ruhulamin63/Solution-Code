
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

    ll t,a,n,m,x,b,c,d,e,mx=0,mi=105,sum=0;
        cin>>n;
read:
    x=n;

    double ans=x/2,ans1=(x/2)+1;

    if(n%2==0) cout<<fixed<<setprecision(10)<<ans/n;
    else cout<<fixed<<setprecision(10)<<ans1/n;
}

