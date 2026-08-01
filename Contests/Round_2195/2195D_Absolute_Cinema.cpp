/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     2195D - Absolute Cinema
 * Contest ID:  2195
 * Verdict:     OK
 * Language:    C++20 (GCC 13-64)
 * Runtime:     93 ms
 * Memory:      900 KB
 * Difficulty:  1300
 * Tags:        math
 * Solved:      2026-07-26 03:16:47
 * URL:         https://codeforces.com/problemset/problem/2195/D
 * -----------------------------------------------------------------------------
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < (b); ++i)

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<ll> v(n);
    rep(i, 0, n) cin >> v[i];

    if (n == 2) {
        cout << v[1] << " " << v[0] << "\n";
        return;
    }

    vector<ll> result(n);

    result[0] = (-(n - 2) * v[0] + (n - 1) * v[1] + v[n - 1]) / (2 * (n - 1));

    rep(i, 1, n - 1) {
        result[i] = (v[i - 1] - 2 * v[i] + v[i + 1]) / 2;
    }

    result[n - 1] = (v[0] + (n - 1) * v[n - 2] - (n - 2) * v[n - 1]) / (2 * (n - 1));

    rep(i, 0, n) {
        cout << result[i] <<" ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
        while (t--) solve();
    
    return 0;
}
