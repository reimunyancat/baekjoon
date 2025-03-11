#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <cctype>
#include <unordered_map>

using namespace std;

using ull = unsigned ll;
using ll = ll;


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }

    int maxFreq = 0;
    for (auto& p : freq) maxFreq = max(maxFreq, p.second);

    if (maxFreq > (n + 1) / 2) cout << "NO";
    else cout << "YES";

    return 0;
}
