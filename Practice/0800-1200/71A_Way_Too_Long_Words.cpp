/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     71A - Way Too Long Words
 * Contest ID:  71
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     46 ms
 * Memory:      0 KB
 * Difficulty:  800
 * Tags:        strings
 * Solved:      2026-07-22 02:33:39
 * URL:         https://codeforces.com/problemset/problem/71/A
 * -----------------------------------------------------------------------------
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        
        int len = s.length();
        if (len > 10) {
            cout << s[0] << len - 2 << s[len - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    
    return 0;
}
