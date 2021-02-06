
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
read:
    while(t--){
        cin>>a>>b;

        set<int>ss;
        map<ll,ll>mp;

        string s;
            cin>>s;

        ll cnt=0,cnt1=0,cnt2=0,cnt3=0,ans=0;
        ll len=s.size();

        for(int i=0; i<len; i++){
            if(s[i]=='L') cnt++;
            if(s[i]=='R') cnt1++;
            if(s[i]=='U') cnt2++;
            if(s[i]=='D') cnt3++;
        }

        if(a<0&&cnt>=abs(a)) ans++;
        if(a>=0&&cnt1>=a) ans++;
        if(b<0&&cnt3>=abs(b)) ans++;
        if(b>=0&&cnt2>=b) ans++;

        if(ans==2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}


