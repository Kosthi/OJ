#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

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

string dtoH (float num) {
    string str;
    int tmp = num;
    int k = tmp;
    while (k) {
        int temp = k % 2;
        str.push_back(temp + '0');
        k /= 2;
    }
    reverse(str.begin(), str.end());
    str.push_back('.');
    float tmp1 = num - tmp;
    while (tmp1 > 0) {
        int temp = tmp1 * 2;
        //cout << temp << endl;
        str.push_back(temp + '0');
        tmp1 = tmp1 * 2 - temp;
    }
    return str;
}

string out (float num) {
    string str, tmp1, tmp2;
    if (num > 0) str.push_back('0');
    else         str.push_back('1');
    tmp1 = dtoH(num);
    int i = 0;
    for (; i < tmp1.size() && tmp1[i] != '.'; i++);
    tmp2 = dtoH(i + 14);
    for (int j = 0; j < tmp2.size() - 1; j++)
        str.push_back(tmp2[j]);
    //cout << tmp2 << endl;
    for (int k = 1; k < tmp1.size(); k++)
        if (tmp1[k] != '.') str.push_back(tmp1[k]);
    while (str.size() < 16) str.push_back('0');
    str = str.substr(0, 16);
    //cout << str << endl;
    return str;
}

int main() {
    int t;
    cin >> t;
    //float a;
    //cin >> a;
    //cout << dtoH(a) << endl;
    //cout << out(a) << endl;
    while (t--) {
        int op;
        float a, b;
        cin >> op >> a >> b;
        switch (op) {
            case 1:
                cout << out(a) << endl;
                break;
            case 2:
                cout << out(a + b) << endl;
                break;
            case 3:
                cout << out(a * b) << endl;
                break;
        }
    }
}
