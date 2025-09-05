#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;


static vector<int> v;
static vector<int> te;
static ll re = 0;

void fun(int s, int e) {
    if(e - s < 1) return;

    int t = s + (e - s) / 2;

    fun(s, t);
    fun(t + 1, e);

    for(int i = s; i <= e; i++) te[i] = v[i];

    int k = s;
    int i1 = s;
    int i2 = t + 1;

    while(i1 <= t && i2 <= e) {
        if(te[i1] > te[i2]) {
            v[k] = te[i2];
            re += i2 - k;
            k++;
            i2++;
        }
        else {
            v[k] = te[i1];
            k++;
            i1++;
        }
    }
    while(i1 <= t) {
        v[k] = te[i1];
        k++;
        i1++;
    }
    while(i2 <= e) {
        v[k] = te[i2];
        k++;
        i2++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    v =  vector<int>(n+1, 0);
    te = vector<int>(n+1, 0);

    for(int i = 1; i <= n; i++) cin >> v[i];

    re = 0;
    fun(1, n);
    cout << re << "\n";

    return 0;
}
