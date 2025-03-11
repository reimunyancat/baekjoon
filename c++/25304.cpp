#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    long int x, sum = 0;
    int n, a, b;
	
    cin >> x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }

    if (x == sum) cout << "Yes";
    else cout << "No";

    return 0;
}