#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> c(n), e(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> e[i];
    }

    vector<vector<int>> d(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> d[i][j];
        }
    }

    vector<vector<long long>> dp(t+1, vector<long long>(n, 0));
    vector<vector<bool>> vis(t+1, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            vis[0][i] = true;
        }
    }

    for (int time = 0; time <= t; time++) {
        for (int i = 0; i < n; i++) {
            if (!vis[time][i]) continue;

            if (time < t) {
                dp[time+1][i] = max(dp[time+1][i], dp[time][i] + e[i]);
                vis[time+1][i] = true;
            }

            for (int j = 0; j < n; j++) {
                int move = d[i][j];
                if (time + move <= t && dp[time][i] >= c[j]) {
                    dp[time + move][j] = max(dp[time + move][j], dp[time][i]);
                    vis[time + move][j] = true;
                }
            }
        }
    }

    long long ans = 0;
    for (int time = 0; time <= t; time++) {
        for (int i = 0; i < n; i++) {
            if (vis[time][i]) {
                ans = max(ans, dp[time][i]);
            }
        }
    }

    cout << ans << "\n";
    
    return 0;
}
}