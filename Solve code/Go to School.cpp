
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
    vector<ll>ar(n);

    for(int i=0; i<n; i++){
        cin>>x;

        x--;

        ar[x]=i+1;
    }

    for(int i=1; i<=n; i++){
        cout<<ar[i]<<" ";
    }
}

