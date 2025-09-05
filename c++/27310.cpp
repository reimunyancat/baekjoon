#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<char, int> map;

    string t;

    cin >> t;
    int s = t.length();

    for (char c : t) map[c]++;

    cout << s + map[':'] + map['_'] * 5 << '\n';

    return 0;
}
