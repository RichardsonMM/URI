#include<iostream>
#include<math.h>
using namespace std;
const int MOD = 2e31-1;

typedef long long int ll;

ll power(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 1) return (a * power(a, b-1)) % MOD;
    ll c = power(a, b/2);

    return (c*c) % MOD;
}


int main(){
    ll n;
    cin >> n;
    ll ans = power(3, n);
    cout << ans << endl;

    return 0;
}
