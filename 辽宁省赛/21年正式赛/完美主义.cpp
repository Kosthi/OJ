#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int D[100][100];
int n;

int maxSum(int i, int j) {
    if (i == n - 1) return D[i][j];
    int x = maxSum(i + 1, j);
    int y = maxSum(i + 1, j + 1);
    return max(x, y) + D[i][j];
}

int main() {
    int n, q;
    vector<int> a;
    cin >> n >> q;
    while (n--) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    while (q--) {
        int opt, i, b_i;
        cin >> opt >> i >> b_i;
        if (opt == 1) {
            a[i - 1] = b_i;
        }
        else if (opt == 2) {
            int k = i - 1;
            for (; k < b_i - 1 && (a[k + 1] >= a[k]) ; k++);
            if  (k == b_i - 1) cout << "Yes" << endl;
            else               cout << "No"  << endl;
        }
    }
}
