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
    int o = 0, sum = 0, w[9];
    for (int i = 0; i < 9; i++) {
        cin >> w[i];
        sum += w[i];
    }

    sort(w, w + 9);

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - w[i] - w[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << w[k] << '\n';
                    }
                }
                return 0;
            }
        }
    }
}
}