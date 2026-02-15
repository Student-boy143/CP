#include <bits/stdc++.h>
using namespace std;

void solve(long long n) {

  cout << n << " ";

    while( n!= 1) {
      if(n % 2 == 0) {
        n /= 2;
        cout << n << " ";
      } else {
        n = n * 3 + 1;
        cout << n << " ";
      }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    solve(n);
    return 0;
}