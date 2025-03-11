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

    for(int i = 0 ; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    int c = 0;

    for(int k = 0; k < n; k++) {
        l t = v[k];
        int i = 0;
        int j = n-1;

        while(i < j) {
            if(v[i]+v[j]==t) {
                if(i != k && j != k) {
                    c++;
                    break;
                }
                else if(i == k) i++;
                else if (j == k) j--;
            }
            else if(v[i]+v[j] < t) i++;
            else j--;
        }
    }

    cout << c << '\n';

    return 0;
}