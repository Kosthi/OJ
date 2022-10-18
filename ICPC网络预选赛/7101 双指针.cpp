#include <iostream>
#include <string>
#include <queue>

int vis[26] = {0};
int n, cnt;
int pos[100];
bool check() {
    for (int i = 0; i < cnt; i++) {
        if (pos[i] != 0) return true;
    }
    return false;
}
using namespace std;
int main() {
    string str[100];
    string target;
    cin >> n;
    while (n--) {
        cin >> cnt;
        target.clear();
        for (int i = 0; i < 26; i++) {
            //if (vis[i]) sum++;
            vis[i] = 0;
        }
        for (int i = 0; i < cnt; i++) {
            cin >> str[i];
        }
        int k = 0;
        for (int i = 0; i < cnt; i++) {
            //for (int j = 0; j < )
            pos[i] = k % str[i].size();
            target.push_back(str[i][pos[i]]);
        }
        k++;
        do {
            for (int i = 0; i < cnt; i++) {
                pos[i] = k % str[i].size();
                target.push_back(str[i][pos[i]]);
                vis[str[i][pos[i]] - 'a'] = 1;
            }
            k++;
        } while (check());
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (vis[i]) sum++;
            vis[i] = 0;
        }
        target = target.substr(0, target.size() - cnt);
        //cout << target << target.size() << endl;
        target += target;
        //cout << target << target.size() << sum << endl;
        int ln = 0, rn = 0, min = INT_MAX, cnt = 0;
        //queue<char>  tmp, temp;
        //int total = target.size();
        while (rn < target.size()) {
            if (vis[target[rn] - 'a'] == 0)
                cnt++;
            vis[target[rn] - 'a']++;
            while (cnt == sum) { // 双指针核心
                min = rn - ln + 1 < min ? rn - ln + 1 : min;
                if (--vis[target[ln] - 'a'] == 0) {
                    cnt--;
                }
                ln++;
            }
            rn++;
        }
        cout << min << endl;
    }
}
