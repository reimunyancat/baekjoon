#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

static vector<vector<int>> v;
static vector<bool> visited;

void dfs(int i) {
    if (visited[i]) return;
    visited[i] = true;

    for (int i2 : v[i]) if (!visited[i2]) dfs(i2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, j, o;;
    cin >> n >> m;
    v.resize(n+1);
    visited = vector<bool>(n+1, false);

    for (int i = 0; i < m; i++) {
        cin >> j >> o;
        v[j].push_back(o);
        v[o].push_back(j);
    }

    int bbang = 0;

    for (int i = 1; i < n + 1; i++) {
        if (!visited[i]) {
            bbang++;
            dfs(i);
        }
    }
    cout << bbang << '\n';

    return 0;
}
