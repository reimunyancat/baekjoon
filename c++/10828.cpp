#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>

using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    stack<int> stack;

    while (t--) {
        cin >> s;

        if (s == "push") {
			int n;
			cin >> n;
			stack.push(n);
		} else if (s == "pop") if (stack.empty()) cout << -1 << '\n';
		  else {
			cout << stack.top() << '\n';
			stack.pop();
		} else if (s == "size") cout << stack.size() << '\n';
		else if (s == "empty") cout << stack.empty() << '\n';
		else if (s == "top") {
			if (stack.empty()) cout << -1 << '\n';
			else cout << stack.top() << '\n';
		}
    }

    return 0;
}