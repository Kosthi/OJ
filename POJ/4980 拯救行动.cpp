#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

//int N, K;
const int MAXN = 100000;
char visited[MAXN][MAXN];

struct Step{
    int r, c;
    int step;
    Step(int rr, int cc, int s): r(rr), c(cc), step(s) {}
};

int main() {
    memset(visited, 0, sizeof visited);
    queue<Step> q;
    int r, c, n, starx, stary, endx, endy;
    cin >> n;
    while (n--) {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> visited[i][j];
                if (visited[i][j] == 'r') {
                    starx = i;
                    stary = j;
                }
                if (visited[i][j] == 'a') {
                    endx = i;
                    endy = j;
                }
            }
        }
        q.push(Step(starx, stary, 0));
        while (!q.empty()) {
            Step s = q.front();
            if (s.r == endx && s.c == endy) {
                cout << s.step << endl;
                queue<Step> empty;
                swap(empty, q);
            }
            else {
                if (s.r - 1 >= 0 && visited[s.r - 1][s.c] != '#') {
                    if (visited[s.r - 1][s.c] == 'x')
                        q.push(Step(s.r - 1, s.c, s.step + 2));
                    else
                        q.push(Step(s.r - 1, s.c, s.step + 1));
                    visited[s.r - 1][s.c] = '#';
                }
                if (s.r + 1 <= r && visited[s.r + 1][s.c] != '#') {
                    if (visited[s.r + 1][s.c] == 'x')
                        q.push(Step(s.r + 1, s.c, s.step + 2));
                    else
                        q.push(Step(s.r + 1, s.c, s.step + 1));
                    visited[s.r + 1][s.c] = '#';
                }
                if (s.c - 1 >= 0 && visited[s.r][s.c - 1] != '#') {
                    if (visited[s.r][s.c - 1] == 'x')
                        q.push(Step(s.r, s.c - 1, s.step + 2));
                    else
                        q.push(Step(s.r, s.c - 1, s.step + 1));
                    visited[s.r][s.c - 1] = '#';
                }
                if (s.c + 1 <= c && visited[s.r][s.c + 1] != '#') {
                    if (visited[s.r][s.c + 1] == 'x')
                        q.push(Step(s.r, s.c + 1, s.step + 2));
                    else
                        q.push(Step(s.r, s.c + 1, s.step + 1));
                    visited[s.r][s.c + 1] = '#';
                }
                q.pop();
            }
        }
    }
    return 0;
}
