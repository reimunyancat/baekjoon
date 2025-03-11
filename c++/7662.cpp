#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int k;
        cin >> k;

        multiset<int> q;
        while (k--) {
            char op;
            int n;
            cin >> op >> n;

            if (op == 'I') {
                q.insert(n);
            } else if (op == 'D') {
                if (q.empty()) continue;

                if (n == 1) {
                    q.erase(prev(q.end()));
                } else if (n == -1) {
                    q.erase(q.begin());
                }
            }
        }

        if (q.empty()) {
            cout << "EMPTY\n";
        } else {
            cout << *prev(q.end()) << " " << *q.begin() << "\n";
        }
    }

    return 0;
}

