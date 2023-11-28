#include <bits/stdc++.h>
using namespace std;
#define file(name) if (fopen(name".inp","r")) {freopen(name".inp","r",stdin); freopen(name".out","w",stdout);}
#define pb push_back
#define fi first
#define se second
#define REP(i,n) for (int i=0; i<n; i++)
#define REPD(i,n) for (int i=n-1; i>=0; i--)
#define FOR(i,a,b) for (int i=a; i<=b; i++)
#define FORD(i,a,b) for (int i=a; i>=b; i--)
#define ll long long
#define vi vector <int>
#define vll vector <ll>
const ll INF=LLONG_MAX;
const int N=1e6+5;

int l,r,cnt=0;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("SPP");

    cin >> l >> r;
    vi a(r-l+1,1);
    if (l==1) a[0]=0;
    FOR(i,2,r/2)
        for(int j=max(2*i,(l+i-1)/i*i); j<=r; j+=i)
            a[j-l]+=i;
    REP(i,a.size()) if (a[i]>i+l) cnt++;
    cout << cnt;
    return 0;
}
//Y tuong o dau la minj se dung sang
//voi mot so i thi ta se chay vong lap de cong vo tong cua cac boi cua i
//Khi lam xong ta chi viec xet xem tong cua cac uoc cua so do co lon hon chinh no hay khong
