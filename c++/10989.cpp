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
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

using ull = unsigned ll;
using ll = ll;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll n;
	int a;
	cin >> n;
	vector<ll> v(10001, 0);
	for (ll i = 0; i < n; i++) {
		cin >> a;
		v[a]++;
	}
	for (ll i = 1; i < 10001; i++) for (ll j = 0; j < v[i]; j++) cout << i << "\n";
	
	return 0;
}