/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     4A - Watermelon
 * Contest ID:  4
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     62 ms
 * Memory:      100 KB
 * Difficulty:  800
 * Tags:        brute force, math
 * Solved:      2026-07-22 02:13:08
 * URL:         https://codeforces.com/problemset/problem/4/A
 * -----------------------------------------------------------------------------
 */
#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;
    
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
