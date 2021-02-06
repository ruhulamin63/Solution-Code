#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

ll binarytodecimal(string n){
    string num = n;
    ll dec_value = 0;

    ll base = 1;

    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main(void){
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>n;
read:
    binarytodecimal(n);
}
