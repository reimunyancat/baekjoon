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
    vector<char> wa;

    for(int i = 0; i < n; i++) cin >> v[i];

    stack<int> s;
    int t = 1;
    bool um = true;

    for(int i = 0; i < v.size(); i++) {
        int su = v[i];
        if(su >= t) {
            while (su >= t) {
                s.push(t++);
                wa.push_back('+');
            }
            s.pop();
            wa.push_back('-');
        }
        else {
            int o = s.top();
            s.pop();
            if(o > su) {
                cout << "NO";
                um = false;
                break;
            }
            else wa.push_back('-');
        }
    }
    if(um) for(int i = 0; i < wa.size(); i++) cout << wa[i] << '\n';

    return 0;
}