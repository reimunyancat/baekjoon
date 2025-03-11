#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const string& a, const string& b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), compare);

    if (arr[0] == "0") {
        cout << 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
    }

    return 0;
}