#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int t, score = 0, count = 0;
    string input;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> input;
        count = 0;
        score = 0;
        for (char c : input) {
            if (c == 'O') {
                count++;
                score += count;
            }
            else count = 0;
        }

        cout << score << '\n';
    }

    return 0;
}