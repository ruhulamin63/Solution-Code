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

        d=sqrt(a)+1;

        if(a<b) cout<<"1\n";
        else if(b>d) cout<<"2\n";
        else{
            ll cnt=0;

            if(b==1){
                b++;
                cnt=1;
            }
            ll ans=INT_MAX;

            for(int i=b; i<=d; i++){
                ll cnt1=i-b,q=a;

                while(q!=0){
                    q /=i;

                    cnt1++;
                }
                ans=min(ans,cnt1);
            }
            cout<<ans+cnt<<nl;
        }
    }
}
