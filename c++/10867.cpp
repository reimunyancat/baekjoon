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
#include <unordered_set>

using namespace std;

using ull = unsigned ll;
using ll = ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()), v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    return 0;
}