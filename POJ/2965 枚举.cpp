#include <iostream>
#include <string>

using namespace std;
string str[4];
int    num[4][4] = {0};

void turn(int i, int j) {
    num[i][j]++;
    int k = i;
    while (k - 1 >= 0) {
        num[k - 1][j]++;
        k--;    }
    k = i;
    while (k + 1 < 4) {
        num[k + 1][j]++;
        k++;
    }
    k = j;
    while (k + 1 < 4) {
        num[i][k + 1]++;
        k++;
    }
    k = j;
    while (k - 1 >= 0) {
        num[i][k - 1]++;
        k--;
    }
}

int main() {
    string path;
    for (int i = 0; i < 4; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (str[i][j] == '+') turn(i, j);
        }
    }
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (num[i][j] % 2) {
                path.push_back(i + '0' + 1);
                path.push_back(j + '0' + 1);
                sum++;
            }
        }
    }
    cout << sum << endl;
    for (int i = 0; i < sum; i++) {
        cout << path[i * 2] << " " << path[i * 2 + 1] << endl;
    }
}
