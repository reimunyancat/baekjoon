#include <bits/stdc++.h>

using namespace std;

using ll = ll;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n, m;

struct asdf {
    int x, y, d;
};

asdf nxt[1024][1024][4];
int dist[1024][1024][4];
int cnt[1024][1024][4];
bool visited[1024][1024];
string a[1024], b[1024];

bool check(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    int x, y, d;
    cin >> x >> y >> d;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < 1024; j++) {
            for (int k = 0; k < 4; k++) {
                dist[i][j][k] = 1;
                int nd = (k + (b[i][j] - '0')) % 4;
                int nx = i + dx[nd];
                int ny = j + dy[nd];
                if (check(nx, ny)) {
                    nxt[i][j][k] = {nx, ny, nd};
                } else {
                    nxt[i][j][k] = {-1, -1, 0};
                }
            }
        }
    }

    ll ans = 0;
    int v = 0;
    stack<asdf> st;
    while (check(x, y)) {
        ll moved = 0;
        v++;

        while (check(x, y) && visited[x][y]) {
            if (cnt[x][y][d] == v) {
                x = -1;
                break;
            }

            cnt[x][y][d] = v;
            st.push({x, y, d});
            moved += dist[x][y][d];

            asdf next = nxt[x][y][d];
            x = next.x;
            y = next.y;
            d = next.d;
        }

        if (check(x, y) && !visited[x][y]) {
            while (!st.empty()) {
                asdf now = st.top();
                st.pop();
                asdf next = nxt[now.x][now.y][now.d];
                dist[now.x][now.y][now.d] += dist[next.x][next.y][next.d];
                nxt[now.x][now.y][now.d] = nxt[next.x][next.y][next.d];
            }
            ans += moved;
            int nd = (d + (a[x][y] - '0')) % 4;
            visited[x][y] = true;
            x += dx[nd];
            y += dy[nd];
            d = nd;
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}