
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

    ll t,a,n,m,x,b,c,d,e,mx=0;
        cin>>n>>m;
read:
    //equation: x^2+m^2 = (n+x)^2
    //formula: (m^2 - n^2)/2*n

    double ans=0;

    ans=(pow(m,2)-pow(n,2))/(2*n);

    cout<<fixed<<setprecision(13)<<ans;
}

