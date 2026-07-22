/*
 * -----------------------------------------------------------------------------
 * Platform:    Codeforces
 * Problem:     546A - Soldier and Bananas
 * Contest ID:  546
 * Verdict:     OK
 * Language:    C++23 (GCC 14-64, msys2)
 * Runtime:     31 ms
 * Memory:      100 KB
 * Difficulty:  800
 * Tags:        brute force, implementation, math
 * Solved:      2026-07-20 20:28:24
 * URL:         https://codeforces.com/problemset/problem/546/A
 * -----------------------------------------------------------------------------
 */
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k, n, w;
    cin>>k>>n>>w;
    int x, cost =0;
    for(int i = 1; i<= w; i++)
    {
        cost += i * k;
    }
    x = cost - n;
    if(cost > n)
        cout << x << endl;
    else
        cout << 0 << endl;
    
}




int main() {

	    solve();
	return 0;

}
