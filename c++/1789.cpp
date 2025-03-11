#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <cctype>
#include <unordered_map>
#include <unordered_set>

using namespace std;

using ull = unsigned ll;
using ll = ll;
using li = long int;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string n;
    cin >> n;
    if(n.find(',') != string::npos) {
        n.erase(find(n.begin(), n.end(),','));
    }
    if(n.find(',') != string::npos) {
        n.erase(find(n.begin(), n.end(),','));
    }
    if(n.find(',') != string::npos) {
        n.erase(find(n.begin(), n.end(),','));
    }
    ull q = stoull(n);

    for(ull p = 0; p <= q; p++) {
        if(p + (p + 1) * p / 2 >= q) {
            cout << p;
            break;
        }
    }

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
//
// #define MAx_N 100
//
// // 8방향 (상, 하, 좌, 우, 대각선)
// int dx[8] = {1, 1, -1, -1, 0, 0, 1, -1};
// int dy[8] = {0, 1, 0, 1, 1, -1, -1, -1};
//
// // 맵의 크기, 출발점, 목적지
// int n;
// int startx, startY, endx, endY;
//
// // 맵과 방문 여부
// bool map[MAx_N][MAx_N];
// bool visited[MAx_N][MAx_N];
//
// // BFS를 위한 큐 구조체
// typedef struct {
//     int x, y;
//     int parentx, parentY; // 경로를 추적하기 위한 부모 좌표
// } Node;
//
// // 큐
// Node queue[MAx_N * MAx_N];
// int front, rear;
//
// void enqueue(Node node) {
//     queue[rear++] = node;
// }
//
// Node dequeue() {
//     return queue[front++];
// }
//
// bool isEmpty() {
//     return front == rear;
// }
//
// // 대공포의 사정거리 내에 있는지 확인
// bool isInRange(int x, int y, int cannonx, int cannonY, int a) {
//     return abs(x - cannonx) <= a && abs(y - cannonY) <= a;
// }
//
// // 대공포 사정거리를 맵에 표시
// void markCannonRange(int x, int y, int a) {
//     for (int i = -a; i <= a; ++i) {
//         for (int j = -a; j <= a; ++j) {
//             int nx = x + i;
//             int ny = y + j;
//             if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
//                 map[nx][ny] = false; // 이동 불가능한 지역 표시
//             }
//         }
//     }
// }
//
// // 경로를 출력
// void printPath(int parentx[MAx_N][MAx_N], int parentY[MAx_N][MAx_N], int x, int y) {
//     if (x == startx && y == startY) {
//         printf("(%d, %d)\n", x, y);
//         return;
//     }
//     printPath(parentx, parentY, parentx[x][y], parentY[x][y]);
//     printf("(%d, %d)\n", x, y);
// }
//
// // BFS로 경로 찾기
// bool bfs() {
//     int parentx[MAx_N][MAx_N];
//     int parentY[MAx_N][MAx_N];
//
//     // 부모 좌표 초기화
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             parentx[i][j] = -1;
//             parentY[i][j] = -1;
//         }
//     }
//
//     enqueue((Node){startx, startY, -1, -1});
//     visited[startx][startY] = true;
//
//     while (!isEmpty()) {
//         Node current = dequeue();
//
//         // 목적지에 도착하면 경로 출력
//         if (current.x == endx && current.y == endY) {
//             printPath(parentx, parentY, endx, endY);
//             return true;
//         }
//
//         // 8방향으로 이동
//         for (int i = 0; i < 8; i++) {
//             int nx = current.x + dx[i];
//             int ny = current.y + dy[i];
//
//             if (nx >= 0 && nx < n && ny >= 0 && ny < n && map[nx][ny] && !visited[nx][ny]) {
//                 visited[nx][ny] = true;
//                 parentx[nx][ny] = current.x;
//                 parentY[nx][ny] = current.y;
//                 enqueue((Node){nx, ny, current.x, current.y});
//             }
//         }
//     }
//
//     return false;
// }
//
// int main() {
//     int cannonCount;
//     int a;
//
//     // 맵 크기 입력
//     scanf("%d", &n);
//
//     // 출발점, 목적지 입력
//     scanf("%d %d", &startx, &startY);
//     scanf("%d %d", &endx, &endY);
//
//     // 맵 초기화
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             map[i][j] = true;
//             visited[i][j] = false;
//         }
//     }
//
//     // 대공포의 사거리 입력
//     scanf("%d", &a);
//
//     // 대공포의 수와 위치 입력
//     scanf("%d", &cannonCount);
//     for (int i = 0; i < cannonCount; i++) {
//         int cannonx, cannonY;
//         scanf("%d %d", &cannonx, &cannonY);
//         markCannonRange(cannonx, cannonY, a);
//     }
//
//     // BFS로 경로 찾기
//     if (!bfs()) {
//         printf("-1\n");
//     }
//
//     return 0;
// }