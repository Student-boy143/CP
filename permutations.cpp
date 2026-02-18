#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(ll n) {
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return;
    }
    for(int i = 2; i <= n; i+=2) {
        cout << i << " ";
    }
    for(int i = 1; i <= n; i+=2) {
        cout << i << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;

    solve(n);
    return 0;
}