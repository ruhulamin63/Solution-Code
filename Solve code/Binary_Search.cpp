#include<bits/stdc++.h>
#define ll          long long int
#define nl          '\n'
#define pi          acos(-1)
#define GCD(a, b)   __gcd(a, b)
#define boost       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define mod         11092019
using namespace std;

ll binarySearch(ll a[], ll low, ll high, ll key){
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main(void){
    //boost;

    ll t,a,n,m,x,b,c,d,e,mx=0,cnt=1;
        cin>>n;
read:
    binarySearch(n);
}
