
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

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>a>>b>>c;
read:
    if(abs(a-b)>c||a==b){
        if(a>b) cout<<"+";
        else if(b>a) cout<<"-";
        else cout<<"0";
    }
    else{
        cout<<"?";
    }
}

