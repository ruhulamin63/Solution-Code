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

    ll t,a,n,m,x,b,c,d,e,mx=0,sum=0,sum1=0,sum2=0;
        cin>>t;
read:

    ll ar[t+5];

    for(int i=1; i<=t; i++){
        cin>>ar[i];
    }
    sort(ar+1,ar+1+t);

    if(t%2==0){
        for(int i=1; i<=t/2; i++){
            sum +=ar[i];
        }

        for(int i=(t/2)+1; i<=t; i++){
            sum1 +=ar[i];
        }
        cout<<sum*sum+sum1*sum1;
    }
    else{
        for(int i=1; i<=t/2; i++){
            sum +=ar[i];
        }

        for(int i=(t/2)+1; i<=t; i++){
            sum1 +=ar[i];
        }
        cout<<sum*sum+sum1*sum1;
    }
    //cout<<sum<<" "<<sum1;
}
