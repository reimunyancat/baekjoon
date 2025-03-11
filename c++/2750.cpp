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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0 ; i < n ; i++) cout << v[i] << '\n';
    
    return 0;
}
