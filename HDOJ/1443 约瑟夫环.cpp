string f[100000];
f[0] = '0';
f[1] = '1';
f[2] = '1';
//f[3][0] = char(9 + '0');
int i;
for (i = 3; i < 1000; i++) {
    int k, flag = 0;
    for (k = 0; k < f[i - 2].size(); k++) {
        int num = f[i - 1][k] - '0' + f[i - 2][k] - '0' + flag;
        //cout << num << endl;
        flag = num / 10 ? 1 : 0;
        num %= 10;
        f[i].push_back(char(num + '0'));
        //cout << f[i][k] << endl;
    }
    if (f[i - 1].size() == f[i - 2].size() && flag) {
            f[i].push_back('1');
    }
    else
        for (int m = k; m < f[i - 1].size(); m++) {
            int num = f[i - 1][m] - '0' + flag;
            flag = num / 10 ? 1 : 0;
            num %= 10;
            f[i].push_back(char(num + '0'));
            if (!flag) break;
            if (flag && m == f[i - 1].size() - 1)
            f[i].push_back('1');
        }
    //reverse(f[i].begin(), f[i].end());
}
