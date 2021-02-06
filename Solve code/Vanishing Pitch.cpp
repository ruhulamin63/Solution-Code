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
        //cin>>t;
read:
    cin>>a>>b>>c>>d;

    if(min(a*b,a*c)>d||max(a*b,a*c)<d) cout<<"Yes";
    else cout<<"No";
}



