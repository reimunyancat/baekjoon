#include <bits/stdc++.h>

using namespace std;

using ll = ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<char> v;
    bool r = true;
    int n, o=0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string p;
        cin >> p;

        for(char t : p) {
            auto it = find(v.begin(), v.end(), t);
            if(it == v.end()) {
                v.push_back(t);
            }
            else if(t == v.back()) {
                continue;
            }
            else {
                r = false;
                break;
            }
        }
        v.erase(v.begin(), v.end());
        if(r) o++;
        else r = true;
    }

    cout << o << '\n';

    return 0;
}
