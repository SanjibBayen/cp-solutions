/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     231A - Team
 * Contest ID:  231
 * Verdict:     OK
 * Language:    C++20 (GCC 13-64)
 * Runtime:     92 ms
 * Memory:      100 KB
 * Difficulty:  800
 * Tags:        brute force, greedy
 * Solved:      2026-08-06 01:13:47
 * URL:         https://codeforces.com/problemset/problem/231/A
 * -----------------------------------------------------------------------------
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int s_c = 0;
    
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        int su = p + v + t;
        
        if (su >= 2) {
            s_c++;
        }
    }
    
    cout << s_c << endl;
    
    return 0;
}
