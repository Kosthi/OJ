#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, D[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> D[i][j];
    //maxSum = D[n - 1];
    for (int i = n - 2; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            D[n - 1][j] = max(D[n - 1][j], D[n - 1][j + 1]) + D[i][j];
    cout << D[n - 1][0] << endl;
}
