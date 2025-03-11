#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> q;

    int n;
    int s = 0;
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        int t;
        cin >> t;
        if(t != 0) q.push_back(t);
        else q.pop_back();
    }

    while(q.size() != 0) {
        s += q.back();
        q.pop_back();
    }

    cout << s << "\n";
    return 0;
}