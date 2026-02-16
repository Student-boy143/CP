#include <bits/stdc++.h>
using namespace std;

int solve(string str) {
    int count = 1;
    int maxLen = 1;

    for(int i = 1; i < str.length(); i++) {
      if(str[i] == str[i-1]) {
        count++;
        maxLen = max(maxLen, count);
      } else {
        count = 1;
      }
    }
    return maxLen;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    int res = solve(str);

    cout << res;

    return 0;
}