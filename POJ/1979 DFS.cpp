#include <iostream>

int W, H, cnt = 1;
char area[20][20];
int tmp[20][20];
int dir[2];

int arr[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dfs(int i, int j) {
    for (int k = 0; k < 4; k++) {
        int x = i + arr[k][0], y = j + arr[k][1];
        if (x >= 0 && x < H && y >= 0 && y < W && area[x][y] == '.') {
            cnt++;
            area[x][y] = '#';
            dfs(x, y);
        }
    }
    return;
}

using namespace std;
int main() {
    while (cin >> W >> H && W && H) {
        cnt = 1;
        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++) {
                cin >> area[i][j];
                if (area[i][j] == '@') {
                    dir[0] = i;
                    dir[1] = j;
                }
            }
        dfs(dir[0], dir[1]);
        cout << cnt << endl;
    }
}
