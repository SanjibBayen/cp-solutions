/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     2247B - Yet Another Constructive
 * Contest ID:  2247
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     859 ms
 * Memory:      100 KB
 * Tags:        constructive algorithms
 * Solved:      2026-07-20 02:23:29
 * URL:         https://codeforces.com/problemset/problem/2247/B
 * -----------------------------------------------------------------------------
 */
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long int n, k, m;
    cin >> n >> k >> m;
    int arr[n];
    int sub_arr[k];
    int l = 0, r = 0, sum = 0;
    bool good_arr = false;
    for (int i = 0; i < k - 1; i++) {

        arr[i] = 1;
        sum += 1;
    }
    arr[k - 1] = m - sum;
    if (m - sum < 1) {
        good_arr = false;
        goto level;

    }
    for (int i = k; i < n; i++) {
        arr[i] = 1;
        while ((arr[i] + arr[i - 1] + arr[i - 2]) == 0) {
            arr[i]++;
        }

    }




    for (int i = 0; i < n - k + 1; i++) {
        sum = 0;
        for (int j = i; j < k + i; j++) {
            sum += arr[j];
        }
        // cout<<sum<<endl;
        if (sum % m == 0) {
            good_arr = true;
            l = i + 1;
            r = l + k - 1;

        }

    }
    if ((l >= 1 && l <= n) && (r >= 1 && r <= n) && (l <= r) && (r - l == k - 1))
        good_arr = true;
    else
        good_arr = false;
    level:
        if (good_arr) {

            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    else
        cout << "NO\n";


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
