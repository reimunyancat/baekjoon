#include <iostream>

using namespace std;
int min_bags(int n) {
    for (int y = n / 5; y >= 0; y--) {
        if ((n - y * 5) % 3 == 0) {
            return y + (n - y * 5) / 3;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << min_bags(n);
    return 0;
}