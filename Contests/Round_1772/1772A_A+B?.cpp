/*
 * Platform:    Codeforces
 * Problem:     1772A - A+B?
 * Contest ID:  1772
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     31 ms
 * Memory:      100 KB
 * Difficulty:  800
 * Solved:      2026-07-20 20:44:28
 * URL:         https://codeforces.com/problemset/problem/1772/A
 */

#include <bits/stdc++.h>


using namespace std;

void solve() {
    string expession;
    cin >> expession;
    int a = expession[0] - 48, b = expession[2] - 48;
    cout << a + b << endl;


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