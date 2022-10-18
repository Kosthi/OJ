#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int gcd (int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int gkd (int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str[10], temp;
        int a, cnt = 0;
        cin >> a;
        for (int i = 0; i < a; i++)
            cin >> str[i];
        cin >> temp;
        for (int j = 0; j < a; j++) {
            for (int i = 0; i < temp.size(); i++) {
                string tmp = temp;
                tmp = tmp.substr(i, str[j].size());
                //cout << tmp << endl;
                //tmp.substr(i, str[j].size());
                //cout << str[j].size() << endl;
                if (str[j] == tmp) cnt++;
            }
        }
        cout << cnt << endl;
    }
}

