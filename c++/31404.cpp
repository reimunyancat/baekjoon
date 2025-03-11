#include <iostream>
#include <string>

using namespace std;

bool cl[65][65];
bool cache[65][65][4];
int ra[65][65];
int rb[65][65];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int h, w, r, c, d;

void clear() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < 4; k++) {
                cache[i][j][k] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> h >> w >> r >> c >> d;

    for (int i = 0; i < h; i++) {
        cin >> s;
        for (int j = 0; j < w; j++) {
            ra[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < h; i++) {
        cin >> s;
        for (int j = 0; j < w; j++) {
            rb[i][j] = s[j] - '0';
        }
    }

    int t = 0, e = 0;
    while (true) {
        if (r < 0 || r >= h || c < 0 || c >= w) break;
        if (cache[r][c][d]) break;

        if (cl[r][c]) {
            cache[r][c][d] = true;
            d = (d + rb[r][c]) % 4;
        } else {
            clear();
            cl[r][c] = true;
            d = (d + ra[r][c]) % 4;
            e = t;
        }

        r += dx[d];
        c += dy[d];
        t++;
    }

    cout << e + 1 << '\n';
    return 0;
}
