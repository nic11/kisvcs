#include <bits/stdc++.h>

using namespace std;

int calc(int n, int k) {
    if (n == k) return 9000 + 0;

    int ans = 6 + 3 * (n - k - 1);
    if (k != 1) {
        ans += n - k + 3 * (k - 1);
    }
    // changes made on master after develop
    return ans;
    // changes here too
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << min(calc(n, k), calc(n, n - k + 1)) << "\n";
    cout << "some changes in develop\n";
}
