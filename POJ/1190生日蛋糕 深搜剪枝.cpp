#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <cstring>
using namespace std;

void Dfs(int, int, int, int);
int MaxVforNRH(int, int, int);

int N, M;
int minArea = 1 << 30;
int area = 0;
int minV[30];
int minA[30];

int main() {
    cin >> N >> M;
    minV[0] = 0;
    minA[0] = 0;
    for (int i = 1; i <= M; i++) {
        minV[i] = minV[i - 1] + i * i * i;
        minA[i] = minA[i - 1] + 2 * i * i;
    }
    
    if(minV[M] > N)
        cout << 0 << endl;
    else {
        int maxH = (N - minV[M - 1]) / (M * M) + 1;
        int maxR = sqrt(double((N - minV[M - 1]) / M)) + 1;
        area = 0;
        minArea = 1 << 30;
        Dfs(N, M, maxR, maxH);
        if (minArea < (1 << 30))
            cout << minArea << endl;
        else
            cout << 0 << endl;
    }
}

void Dfs(int v, int n, int r, int h) {
    if (n == 0) {
        if (!v) minArea = min(minArea, area);
        return;
    }
    if (v <= 0)
        return;
    if (minV[n] > v)
        return;
    if (r < n || h < n)
        return;
    if (area + minA[n] >= minArea)
        return;
    if (MaxVforNRH(n, r, h) < v)
        return;
    for (int rr = r; rr >= n; rr--) {
        for (int hh = h; hh >= n; hh--) {
            if (n == M)
                area = rr * rr;
            area += 2 * rr * hh;
            Dfs(v - rr * rr * hh, n - 1, rr - 1, hh - 1);
            area -= 2 * rr * hh;
        }
    }
}

//int MaxVforNRH(int n, int r, int h) {
//    int v = 0;
//    for (int i = 0; i < n; i++)
//        v += (r - i) * (r - i) * (h - i);
//    return v;
//}


#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <cstring>
using namespace std;

void Dfs(int, int, int, int);
int MaxVforNRH(int, int, int);

int N, M;
int minArea = 1 << 30;
int area = 0;
int minV[30];
int minA[30];
int maxV[50][50][50];
    
int main() {
    cin >> N >> M;
    minV[0] = 0;
    minA[0] = 0;
    for (int i = 1; i <= M; i++) {
        minV[i] = minV[i - 1] + i * i * i;
        minA[i] = minA[i - 1] + 2 * i * i;
    }
    
    for (int i = 0; i < 50; i++)
        for (int j = 0; j < 50; j++)
            for (int k = 0; k < 50; k++)
                maxV[i][j][k] = 1 << 30;
    
    if(minV[M] > N)
        cout << 0 << endl;
    else {
        int maxH = (N - minV[M - 1]) / (M * M) + 1;
        int maxR = sqrt(double((N - minV[M - 1]) / M)) + 1;
        area = 0;
        minArea = 1 << 30;
        Dfs(N, M, maxR, maxH);
        if (minArea < (1 << 30))
            cout << minArea << endl;
        else
            cout << 0 << endl;
    }
}

void Dfs(int v, int n, int r, int h) {
    if (n == 0) {
        if (!v) minArea = min(minArea, area);
        return;
    }
    if (v <= 0)
        return;
    if (minV[n] > v)
        return;
    if (r < n || h < n)
        return;
    if (area + minA[n] >= minArea)
        return;
    if (maxV[n][r][h] < v || MaxVforNRH(n, r, h) < v)
        return;
    for (int rr = r; rr >= n; rr--) {
        for (int hh = h; hh >= n; hh--) {
            if (n == M)
                area = rr * rr;
            area += 2 * rr * hh;
            Dfs(v - rr * rr * hh, n - 1, rr - 1, hh - 1);
            area -= 2 * rr * hh;
        }
    }
}

int MaxVforNRH(int n, int r, int h) {
    int v = 0;
    for (int i = 0; i < n; i++)
        v += (r - i) * (r - i) * (h - i);
    maxV[n][r][h] = v;
    return v;
}
