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
#define INF LLONG_MAX
const int N=1e6+5;

int n,k;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("IPHONE");

    cin >> n >> k;
    if (n%2==0) cout << min(k+1,n/2);
    else cout << min(n,k+1);
    return 0;
}
//Y tuong bai nay la ta se xet xem cac vi tri cuoi ma co gai ngoi
//co the la cho nao
//Ta co the noi cac ghe co the toi bang mot duong thang cho de nhin
//No se chia ra hai truong hop:
//
//Voi n chan
//Khi so luot doi dat toi n/2 thi se bi lap lai
//VD n=8
//Luot 1: 1 -> 2; 1 -> 8 (So ghe co the qua la 2 va 3, so luong la 2)
//Cac ghe ngoi se tao thanh mot duong thang
//Luot 2: 2 -> 1 va 3; 8 -> 1 va 7
//Cac ghe ngoi se tao thanh mot hinh tam giac
//Luot 3: 1 -> 2 va 8; 3 -> 2 va 4; 7 -> 8 va 6
//Cac ghe ngoi se tao thanh mot hinh vuong
//Luot 4: 2 -> 1 va 3; 8 -> 1 va 7; 6 -> 7 va 5; 4 -> 3 va 5
//Cac ghe ngoi van se tao thanh hinh vuong
//Luot 5: 1 -> 2 va 8; 3 -> 2 va 4; 7 -> 8 va 6; 5 -> 4 va 7
//Cac ghe ngoi van se tao thanh hinh vuong va se giong voi hinh vuong o luot 3
//Nen se co quy luat:
//    Voi n chan:
//        Voi k<n/2 thi se in ra k+1
//        Nguoc lai neu k>=n/2 se in ra n/2
//
//Voi n le:
//VD: n=5
//Luot 1: 1 -> 2 va 5
//Cac ghe ngoi se tao thanh mot duong thang
//Luot 2: 2 -> 1 va 3; 5 -> 1 va 4
//Cac ghe ngoi se tao thanh mot hinh tam giac
//Luot 3: 1 -> 2 va 5; 3 -> 2 va 4; 4 -> 3 va 5
//Co 4 ghe ngoi noi voi nhau
//Luot 4: 2 -> 1 va 3; 5 -> 1 va 4; 4 -> 3 va 5; ; 3 -> 2 va 4
//Co 5 ghe ngoi noi voi nhau
//Da 5 ghe noi voi nhau thi tat nhien du di chuyen qua nguoi
//ben canh bao nhieu lan thi cung chi co loanh quanh n ghe
//Nen ta co quy luat:
//    Voi n le:
//        Voi k<n thi se in ra k+1
//        Nguoc lai neu k>=n se in ra n
//Ket hop hai dieu vi tim duoc ta se co dap an cua bai nay
//Voi n chan:
//    Voi k<n/2 thi se in ra k+1
//    Nguoc lai neu k>=n/2 se in ra n/2
//Voi n le:
//    Voi k<n thi se in ra k+1
//    Nguoc lai neu k>=n se in ra n
//Hay ta co the viet ngan lai thanh:
//Voi n chan: in ra min(k+1,n/2)
//(Vi neu k>=n/2 thi k+1>n/2 va se in ra n/2
// Nguoc lai thi ta van in cai k+1)
//Voi n le: in ra min(k+1,n)
//(Vi neu k>=n thi k+1>n va se in ra n
// Nguoc lai thi ta van in cai k+1)
