#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    vector<int> v(f + 1, -1);
    queue<int> q;
    q.push(s);
    v[s] = 0;

    while (!q.empty()) {
        int c = q.front();
        q.pop();

        if (c == g) {
            cout << v[c] << '\n';
            return 0;
        }

        if (c + u <= f && v[c + u] == -1) {
            v[c + u] = v[c] + 1;
            q.push(c + u);
        }

        if (c - d >= 1 && v[c - d] == -1) {
            v[c - d] = v[c] + 1;
            q.push(c - d);
        }
    }

    cout << "use the stairs" << '\n';
    return 0;
}

