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
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>t;
read:
    int bi[32],i=0;

    while(t>0){

        bi[i]=t%2;
        t /=2;
        i++;
    }
    for(int k=i-1; k>=0; k--){
        if(bi[k]==1&&bi[k-1]==1){
            cnt++;
        }
        else{
            cnt=1;
        }
        mx=max(mx,cnt);
    }
    cout<<mx;
}
