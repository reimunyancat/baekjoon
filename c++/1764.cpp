#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    set<string> set_n, set_m;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        set_n.insert(name);
    }

    for (int i = 0; i < m; ++i) {
        string name;
        cin >> name;
        set_m.insert(name);
    }

    vector<string> common;
    for (const auto& name : set_n) if (set_m.count(name)) common.push_back(name);

    sort(common.begin(), common.end());

    cout << common.size() << "\n";
    for (const string& name : common) cout << name << "\n";


    return 0;
}