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

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt;
        cin>>t;
read:
    string s;
        cin>>s;

    ll check[10]={0};

    for(int i=0; i<t; i++){

        if(s[i]=='L'){
            for(int j=0; j<10; j++){
                if(check[j]==0){
                    check[j]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int j=9; j>=0; j--){
                if(check[j]==0){
                    check[j]=1;
                    break;
                }
            }
        }

       else{
            check[s[i]-'0']--;
       }
    }

    for(int i=0; i<10; i++){
        cout<<check[i];
    }
}

