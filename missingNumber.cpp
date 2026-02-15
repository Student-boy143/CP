#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n; cin >> n;
    vector<long long> v(n-1);

    long long sum = 0;
    long long nSums = n*(n+1) / 2;

    for(int i = 0; i < n-1; i++) {
      cin >> v[i];
      sum += v[i];
    }

    cout << nSums - sum;

    return 0;
}