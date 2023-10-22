#include <bits/stdc++.h>
using namespace std;
#define file(name) if(fopen(name".inp","r")) {freopen(name".INP","r",stdin); freopen(name".OUT","w",stdout);}
#define FOR(i,n) for (int i=0; i<n; i++)
#define FORD(i,n) for (int i=n-1; i>=0; i--)
#define pb push_back
#define fi first
#define se second
using ll=long long;
const int N=1e6+5;

int n,s,a[N],use[N];
bool check=false;
ll sum=0;

void print() {
    FOR(i,n) if (use[i]) cout << a[i] << " ";
}

void solve(int k) {
    if (check) return;
    for (int j=0; j<=1; j++) {
        use[k]=j;
        sum+=j*a[k];
        if (k==n) { if (sum==s) {print(); check=true; return;} }
        else solve(k+1);
        sum-=j*a[k];
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("ATM");

    cin >> n >> s;
    FOR(i,n) cin >> a[i];
    solve(0);
    if (!check) cout << -1;
    return 0;
}

