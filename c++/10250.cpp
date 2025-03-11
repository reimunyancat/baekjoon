#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int T, H, W, N, floor, number;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        
        floor = N % H;
        number = N / H + 1;

        if (floor == 0) {
            floor = H;
            number -= 1;
        }

        cout << floor;
        if (number < 10) cout << '0';
        cout << number << '\n';
    }
    return 0;
}