#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

struct sor {
    bool operator()(int o1, int o2) {
        int first = abs(o1);
        int second = abs(o2);
        if(first == second) return o1 > o2;
        else return first > second;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, sor> q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if(t == 0) {
            if(q.empty()) cout << "0" << '\n';
            else {
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else q.push(t);
    }

    return 0;
}