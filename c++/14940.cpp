#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> map(n, vector<int>(m));
    vector<vector<int>> distance(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                q.push({i, j});
                distance[i][j] = 0;
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 1 && distance[nx][ny] == -1) {
                distance[nx][ny] = distance[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0) {
                cout << "0 ";
            } else if (distance[i][j] == -1) {
                cout << "-1 ";
            } else {
                cout << distance[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}