#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int t, n, m, s = 0, temp;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        for (int i = n; i <= m; i++) {
			temp = i;
            if (temp == 0) s++;
			while (temp > 0) {
				if (temp % 10 == 0) s++;
				temp /= 10;
			}
		}
        cout << s << '\n';
        s = 0;
    }
}