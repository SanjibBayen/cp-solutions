/*
 * Platform:    Codeforces
 * Problem:     2247B - Yet Another Constructive
 * Contest ID:  2247
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     31 ms
 * Memory:      0 KB
 * Difficulty:  None
 * Solved:      2026-07-20 04:06:11
 * URL:         https://codeforces.com/problemset/problem/2247/B
 */

#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k, m;
    cin >> n >> k >> m;

    if (m < k) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 0; i < k - 1; i++) {
        cout << 1 << " ";
    }

    long long element = m - (k - 1);
    cout << element << " ";
    for (int i = k; i < n; i++) {
        cout << m + 1 << " ";
    }
    cout << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}