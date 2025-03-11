#include <iostream>
#include <vector>

using namespace std;
using ll = ll;

int main() {
    ll a;
    cin >> a;

    vector<ll> dp(a + 1, 0);

    for (ll i = 2; i <= a; ++i) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    cout << dp[a] << "\n";
    return 0;
}

