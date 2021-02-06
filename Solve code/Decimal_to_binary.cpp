#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

string decimal_to_binary(ll n){
    string s = "";
    while (n > 0)
    {
        if (n % 2 == 0)
            s.pb('0');
        else
            s.pb('1');
        n /= 2;
    }
    reverse(all(s));
    return s;
}

int main(void){
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>n;
read:
    decimal_to_binary(n);
}
