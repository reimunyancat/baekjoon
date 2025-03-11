#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> t(v);

    for(int i = 0; i < n; i++) cin >> v[i];

    stack<int> s;
    s.push(0);

    for(int i = 1; i < n; i++) {
        while(!s.empty() && v[s.top()] < v[i]) {
            t[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()) {
        t[s.top()] = -1;
        s.pop();
    }
    for(int i = 0; i < n; i++) cout << t[i] << " ";

    return 0;
}