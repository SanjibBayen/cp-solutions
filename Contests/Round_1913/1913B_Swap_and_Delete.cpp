/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     1913B - Swap and Delete
 * Contest ID:  1913
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     31 ms
 * Memory:      0 KB
 * Difficulty:  1000
 * Tags:        strings
 * Solved:      2026-07-25 01:41:08
 * URL:         https://codeforces.com/problemset/problem/1913/B
 * -----------------------------------------------------------------------------
 */
#include <bits/stdc++.h>

using namespace std;

void solve() {

    string s;
    cin >> s;
    int n = s.length();

    // cout<<n<<"\n";
    int t0 = 0, t1 = 0;
    // for (char c: s) {
    //     if (c == '0')
    //         t0++;
    //     else
    //         t1++;
    // }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            t0++;
        else
            t1++;
    }
    //  cout<<t0<<"\n";
    //   cout<<t1<<"\n";

    int max_m = 0;
    int p0 = 0, p1 = 0;

    for (int j = 1; j <= n; j++) {
        if (s[j - 1] == '0') {
            p0++;
        } else {
            p1++;
        }

        if (p1 <= t0 && p0 <= t1) {
            max_m = j;
        }
        else {
            break;
        }

    }
    // cout<<p0<<"\n";
    //   cout<<p1<<"\n";



    cout << n - max_m << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
