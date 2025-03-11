#include <bits/stdc++.h>

using namespace std;

using ll = ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    queue<string> q;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string t;
        cin >> t;

        if (t == "push") {
            string nu;
            cin >> nu;
            q.push(nu);
        }
        else if (t == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            } else cout << "-1" << '\n';
        }
        else if (t == "size") cout << q.size() << '\n';
        else if (t == "empty") cout << q.empty() << '\n';
        else if (t == "front") {
            if (!q.empty()) cout << q.front() << '\n';
            else cout << "-1" << '\n';
        }
        else if (t == "back") {
            if (!q.empty()) cout << q.back() << '\n';
            else cout << "-1" << '\n';
        }
        else cout << "q" << '\n';
    }

    return 0;
}
