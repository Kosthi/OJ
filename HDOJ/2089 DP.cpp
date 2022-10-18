#include <iostream>

int solve(int x);
int dfs(int pos, int pre, int sta, bool limit);

using namespace std;

int a[7];
int dp[7][2];

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF && a + b) {
        memset(dp, -1, sizeof dp);
        printf("%d\n", solve(b) - solve(a - 1));
    }
    return 0;
}

int dfs(int pos, int pre, int sta, bool limit) {
    if (pos == -1) return 1;
    if (!limit && dp[pos][sta] != -1) return dp[pos][sta];
    int up = limit ? a[pos] : 9;
    int tmp = 0;
    for (int i = 0; i <= up; i++) {
        if (pre == 6 && i == 2) continue;
        if (i == 4) continue;
        tmp += dfs(pos - 1, i, i == 6, limit && i == a[pos]);
    }
    if (!limit) dp[pos][sta] = tmp;
    return tmp;
}

int solve(int x) {
    int pos = 0;
    while (x) {
        a[pos++] = x % 10;
        x /= 10;
    }
    return dfs(pos - 1, -1, 0, true);
}
