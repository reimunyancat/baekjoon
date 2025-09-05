#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int tar[n][m];
    int dp[n][m] = {0};

    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> tar[i][j];

    dp[0][0] = tar[0][0];
    for (int j = 1; j < m; j++) dp[0][j] = dp[0][j-1] + tar[0][j];
    for (int i = 1; i < n; i++) dp[i][0] = dp[i-1][0] + tar[i][0];


    for(int i = 1; i < n; i++)
        for(int j = 1; j < m; j++)
            dp[i][j] = tar[i][j] + max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});

    cout << dp[n-1][m-1] << '\n';

    return 0;
}
