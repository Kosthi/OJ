#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

struct node {
    int x, y;
}pots[3000];

int calS (node a, node b, node c) {
    int ab_x = b.x - a.x;
    int ab_y = b.y - a.y;
    int ac_x = c.x - a.x;
    int ac_y = c.y - a.y;
    return abs(ab_x * ac_y - ab_y * ac_x);
}

int main() {
    int n, q;
    while (cin >> n >> q) {
        for (int i = 0; i < 3 * n; i++) {
            cin >> pots[i].x >> pots[i].y;
        }
        for (int i = 0; i < q; i++) {
            int cnt = 0;
            node tmp;
            cin >> tmp.x >> tmp.y;
            for (int j = 0; j < 3 * n; j += 3) {
                int S1 = calS(tmp, pots[j], pots[j + 1]);
                int S2 = calS(tmp, pots[j], pots[j + 2]);
                int S3 = calS(tmp, pots[j + 1], pots[j + 2]);
                int S = calS(pots[j], pots[j + 1], pots[j + 2]);
                if (S1 + S2 + S3 == S) cnt++;
            }
            if (cnt % 2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
