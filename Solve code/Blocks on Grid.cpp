
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
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,mi=105,sum=0;
        cin>>n>>m;
read:
    ll ar[n+5][m+5];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>ar[i][j];

            mi=min(mi,ar[i][j]);
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            sum +=ar[i][j]-mi;
        }
    }
    cout<<sum;
}
