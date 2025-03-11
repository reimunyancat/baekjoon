#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t = 1 , n1 = 1, n2 = 1, sum = 1;
    cin >> n;

    while(n2 != n) {
        if(sum == n) {
            t++;
            n2++;
            sum = sum + n2;
        }
        else if(sum > n) {
            sum = sum - n1;
            n1++;
        }
        else {
            n2++;
            sum = sum + n2;
        }
    }

    cout << t << "\n";

    return 0;
}