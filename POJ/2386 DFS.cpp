#include <iostream>

int m, n, cnt;
char area[100][100];
int tmp[20][20];
int dir[2];

int arr[8][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {- 1, 1}, {- 1, - 1}, {1, 1}, {1, - 1}};

void dfs(int i, int j) {
    for (int k = 0; k < 8; k++) {
        int x = i + arr[k][0], y = j + arr[k][1];
        if (x >= 0 && x < m && y >= 0 && y < n && area[x][y] == 'W') {
            //cnt++;
            area[x][y] = '.';
            dfs(x, y);
        }
    }
    return;
}

using namespace std;
int main() {
    while (cin >> m >> n && m && n) {
        cnt = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cin >> area[i][j];
            }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                if (area[i][j] == 'W') {
                    dfs(i, j);
                    cnt++;
                }
            }
        cout << cnt << endl;
    }
}
