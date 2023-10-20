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

int n,m;

void sang(int l, int r) {
    bool a[r-l+1];
    for (int i=0; i<r-l+1; i++) a[i]=true;
    for (int i=2; i*i<=r; i++)
        for (int j=max(i*i,(l+i-1)/i*i); j<=r; j+=i)
            a[j-l]=false;
    for (int i=max(l,2); i<=r; i++) if(a[i-l]) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("");

    cin >> n >> m;
    sang(n,m);
    return 0;
}

