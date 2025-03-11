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
    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; ++i) cin >> points[i].first >> points[i].second;

    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    for (const auto& point : points) cout << point.first << ' ' << point.second << '\n';

    return 0;
}