#include<bits/stdc++.h>
typedef double          D;
typedef long long int   LL;
typedef long double     LD;
#define ll              long long int
#define OR              ||
#define AND             &&
#define nl              '\n'
#define S               string
#define inf             INT_MAX
#define SQR(a)          (a) * (a)
#define pb              push_back
#define GCD(a, b)       __gcd(a, b)
#define MOD             1000000007
#define PI              2.0*acos(0.0)
#define COSI(x)         acos(x)
#define LCM(a, b)       (a * b) / GCD(a, b)
#define mem(a,b)        memset(a,b,sizeof(a))
#define srtv(v)         sort(v.begin(),v.end())
#define T               int t; cin>>t; while(t--)
#define Rep(i,a,b)      for(int i = a; i <= b; i++)
#define rep(i,a,b)      for(int i = a; i >= b; i--)
#define boost		    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout           freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)

#define si(x)           scanf("%d",&x)
#define pi(x)           printf("%d",x)
#define ss(str)         scanf("%s",str)
#define pl(x)           printf("%lld",x)
#define sl(x)           scanf("%lld",&x)
#define sii(x,y)        scanf("%d %d",&x,&y)
#define sll(x,y)        scanf("%lld %lld",&x,&y)
#define siii(x,y,z)     scanf("%d %d %d",&x,&y,&z)
#define slll(x,y,z)     scanf("%lld %lld %lld",&x,&y,&z)
#define M 500005

using namespace std;

//===========================================================

LL fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

//===========================================================

void divisor(int n){
    vector<LL>a(n+1);

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j +=i){
            a[j]++;
        }
        cout<<a[i]<<" ";
    }
}

//===========================================================

void divisor_count(int n){
    int cnt=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0) cnt++;
        if(n/i != i) cnt++;
    }
    cout<<cnt;
}

//===========================================================

void divisor_show(int n){
    vector<ll>ar;

    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
          ar.push_back(i);
          if(n/i!=i){
            ar.push_back(n/i);
          }
        }
      }
      sort(ar.begin(),ar.end());

      for(ll result : ar){
        cout<<result<<nl;
      }
}

//===========================================================

void isPrime_sieve(int n){
    bool marked[M];

    memset(marked,true,sizeof(marked));

    for(int i=2; i*i<=n; i++){
        if(marked[i]==true){ //isPrime number
            for(int j=i*i; j<=n; j +=i){
                marked[j]=false;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(marked[i]){
            cout<<i<<" ";
        }
    }
}

//===========================================================

bool isPrime(ll n){

    if(n == 2){
        return true;
    }
    if(n < 2 || n % 2 == 0){
        return false;
    }

    for(ll i=3; i <= sqrt(n);i +=2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

//===========================================================

void move_brackets(int n,string s){
    int op=0,len=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                op++;
            }
            else{
                if(op){
                    op--;
                    len +=2;
                }
            }
        }
        cout<<(n-len)/2<<nl;
}

//===========================================================

ll DigitSum(ll num){

    ll sum =0;

    while(num != 0){
        sum += (num % 10);
        num /= 10;
    }

    return sum;
}

//===========================================================

const LL mx=1e9+123;

//lightOJ: nszibeaf

int main(void){
    boost;

    ll a,t,b,c,d,k,r,n,m,x,y,even1=0,odd1=0,f=0,even=0,odd=0;
        //cin>>t;

    set<int>s;
    map<ll,ll>mp;

    cin>>n>>m;

    ll ar[n+5],br[m+5];

    for(int i=1; i<=n; i++){
        cin>>ar[i];

        if(ar[i]%2==0) even++;
        else odd++;
    }
    for(int i=1; i<=m; i++){
        cin>>br[i];

        if(br[i]%2==0) even1++;
        else odd1++;
    }
    cout<<min(even,odd1)+min(odd,even1)<<nl;
}
