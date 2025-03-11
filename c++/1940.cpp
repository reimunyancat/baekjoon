#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int count = 0;
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if(v[i] + v[j] < m) i++;
        else if(v[i] + v[j] > m) j--;
        else {
            count++;
            i++;
            j--;
        }
    }
    cout << count << "\n";

    return 0;
}