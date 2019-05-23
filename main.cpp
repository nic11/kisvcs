#include <bits/stdc++.h>

using namespace std;

int calc(int n, int k) {
    if (n == k) return 100500;

    int ans = 6 + 3 * (n - k - 1);
    if (k != 1) {
        ans += n - k + 3 * (k - 1);
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;

    // cerr << calc(n, k) << " / " << calc(n, n - k + 1) << "\n";
    cout << min(calc(n, k), calc(n, n - k + 1)) << "\n";
}
