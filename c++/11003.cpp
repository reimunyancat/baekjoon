#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;
    deque<pair<int, int>> que;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        while(que.size() && que.back().second > t) que.pop_back();
        que.push_back(pair(i, t));
        if(que.front().first <= i - l) que.pop_front();
        cout << que.front().second << ' ';
    }

    return 0;
}