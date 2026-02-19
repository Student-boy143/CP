#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int t;cin >> t;

    while(t--) {
      ll x,y;
      cin >> x >> y;
      ll ans;

      // vertical
      if(x <= y) {
        if(y&1) {
          ans = y*y-(x-1);
        } else {
          ans = (y-1)*(y-1) + x;
        }
      }
      // horizontal 
      else {
        if(x&1) {
          ans = (x-1) * (x-1) +y;
        } else {
          ans = x*x-(y-1);
        }
      }
      cout << ans << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}