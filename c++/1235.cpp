#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int len = arr[0].size();
    for (int i = len - 1; i >= 0; i--) {
        bool unique = true;
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j].substr(i) == arr[k].substr(i)) {
                    unique = false;
                    break;
                }
            }
            if (!unique) break;
        }
        if (unique) {
            cout << len - i << endl;
            break;
        }
    }

    return 0;
}
