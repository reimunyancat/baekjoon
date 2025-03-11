#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, i2 = 0, t = 0;
    cin >> n >> k;

    vector<int> v(n);

    int j = 1;
    for(int i = 0; i < n; i++) {
        v[i] = j;
        j++;
    }
    cout << "<";
    for(int i = 0; i < n*n; i++) {
        for(int p = 0; p < k; p++) {
            t++;
            for(int tt = 0; tt < n; tt++) {
                if(t > n) t -= n;
                if(v[t-1] == 0) t++;
            }
        }
        if(v[t-1] != 0 && i2 + 1 == n) {
            cout << v[t-1] << ">";
            i2++;
        }
        else if(v[t-1] != 0) {
            cout << v[t-1] << ", ";
            i2++;
        }
        if(i2 == n) break;
        v[t-1] = 0;
    }


    return 0;
}