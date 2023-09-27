#include <bits/stdc++.h>
using namespace std;

int n,k;

long long solve(int candy, int people, int start) {
    if (people==1) return 1;
    if (!(candy/people>start+1)) return 0;
    if (people==2) return (candy-1)/2 - start;
    long long res=0;
    for (int i=start+1; i<candy/people; i++) res+=solve(candy-i,people-1,i);
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    cout << solve(n,k,0);
    return 0;
}

