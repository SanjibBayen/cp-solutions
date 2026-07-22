/*
 * Platform:    Codeforces
 * Problem:     2242B - Predominant Frequency Division
 * Contest ID:  2242
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     78 ms
 * Memory:      0 KB
 * Difficulty:  1000
 * Solved:      2026-07-21 02:16:36
 * URL:         https://codeforces.com/problemset/problem/2242/B
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int flag = 0;
    if (n < 3) {
        cout << "NO\n";
        return;
    }
    
    int curr_count_1st = 0, large_count_1st = 0;
    
    for (int i = 0; i < n - 2; i++) {
        if (flag == 1) break;
        
        if (arr[i] == 1)
            curr_count_1st++;
        else
            large_count_1st++;

        if ((curr_count_1st >= large_count_1st) && curr_count_1st != 0) {
            int curr_count_2nd = 0, large_count_2nd = 0;
            
            for (int j = i + 1; j < n - 1; j++) {
                if (arr[j] <= 2)
                    curr_count_2nd++;
                else
                    large_count_2nd++;
                    
                if (curr_count_2nd >= large_count_2nd && curr_count_2nd != 0) {
                    cout << "YES\n";
                    flag = 1;
                    break;   
                }
            }
        }
    }
    
    if (flag == 0) cout << "NO\n";
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