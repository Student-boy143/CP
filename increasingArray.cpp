#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(vector<ll> v, ll n) {
    ll moves = 0;

    for(int i = 1; i < n; i++) {
      if(v[i] < v[i-1]) {
        while(v[i] != v[i-1]) {
          v[i]++;
          moves++;
        }
      } else continue;
    }
    return moves;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n; cin >> n;
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }

    ll result = solve(v, n);

    cout << result;
    return 0;
}