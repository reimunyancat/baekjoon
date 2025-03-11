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

using namespace std;

using ull = unsigned ll;
using ll = ll;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> m;
	vector<int> s1(m);
	for (int i = 0; i < m; i++) cin >> s1[i];
	sort(s.begin(), s.end());
	for (int i = 0; i < m; i++) {
		if (binary_search(s.begin(), s.end(), s1[i])) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	
	return 0;
}