#include <iostream>

using namespace std;
string str[4];
int mint = INT_MAX;

int check() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (str[i][j] == str[0][0]) sum++;
        }
    }
    //cout << sumb << endl;
    if (sum == 16) return 1;
    return 0;
}

void turn(int i, int j) {
    if (str[i][j] == 'w') str[i][j] = 'b';
    else                  str[i][j] = 'w';
    if (i - 1 >= 0) {
        if (str[i - 1][j] == 'w') str[i - 1][j] = 'b';
        else str[i - 1][j] = 'w';
        //cout << 1 << endl;
    }
    if (i + 1 < 4) {
        if (str[i + 1][j] == 'w') str[i + 1][j] = 'b';
        else                  str[i + 1][j] = 'w';
        //cout << 1 << endl;
    }
    if (j + 1 < 4) {
        if (str[i][j + 1] == 'w') str[i][j + 1] = 'b';
        else                  str[i][j + 1] = 'w';
    }
    if (j - 1 >= 0) {
        if (str[i][j - 1] == 'w') str[i][j - 1] = 'b';
        else                  str[i][j - 1] = 'w';
    }
}

void dfs(int i, int j, int s) {
    if(check()) {
        if (s < mint) mint = s;
        return;
    }
    if (i == 4) return;
    turn(i, j);
    if (j == 3) dfs(i + 1, 0, s + 1);
    else        dfs(i, j + 1, s + 1);
    turn(i, j);
    if (j == 3) dfs(i + 1, 0, s + 1);
    else        dfs(i, j + 1, s + 1);
    return;
}

int main() {
    for (int i = 0; i < 4; i++) {
        cin >> str[i];
    }
//    turn(2, 2);
//    for (int i = 0; i < 4; i++) {
//        cout << str[i] << endl;
//    }
    dfs(0, 0, 0);
    //cout << str[0] << endl;
    if (mint <= 16) {
        cout << mint << endl;
    }
    else {
        cout << "Impossible" << endl;
    }
}

