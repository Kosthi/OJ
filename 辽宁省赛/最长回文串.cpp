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

int judge (string str) {                   // 偶数不考虑 我们只关心奇数情况下
    int cnt[26] = {0};
    for (int i = 0; i < str.size(); i++) {
        cnt[str[i] - 'a']++;
    }
    int k = 0;
    for (int i = 0; i < str.size(); i++) {
        if (cnt[str[i] - 'a'] && cnt[str[i] - 'a'] % 2 == 1) {
            k++;
            cnt[str[i] - 'a'] = 0;
        }
    }
    if (k <= 1) return 1;
    return 0;
}

int main() {
    int n, m;
    string str, bags[100];
    unordered_map<string, int> hash;
    cin >> n >> m;
    int sum = n;
    while (n--) {
        cin >> str;
        sort(str.begin(), str.end());
        bags[sum - n - 1] = str;
        hash[str]++;
        //cout << tmp << endl;
    }
    int out = 0, flag = 1;
    for (int i = 0; i < sum; i++) {
        //cout << hash[bags[i]] << endl;
        if (hash[bags[i]]) {
            if (hash[bags[i]] % 2 == 0) {
                out += hash[bags[i]] * m;
                hash[bags[i]] = 0;
            }
            else if (hash[bags[i]] % 2 == 1) {
                out += (hash[bags[i]] - 1) * m;
                if (judge(bags[i]) && flag) {
                    out += m;
                    flag = 0;
                }
                hash[bags[i]] = 0;
            }
        }
    }
    cout << out << endl;
    hash.clear();
}

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

int judge (string str) {                   // 偶数不考虑 我们只关心奇数情况下
    int cnt[26] = {0};
    for (int i = 0; i < str.size(); i++) {
        cnt[str[i] - 'a']++;
    }
    int k = 0;
    for (int i = 0; i < str.size(); i++) {
        if (cnt[str[i] - 'a'] && cnt[str[i] - 'a'] % 2 == 1) {
            k++;
            cnt[str[i] - 'a'] = 0;
        }
    }
    if (k <= 1) return 1;
    return 0;
}

int main() {
    int n, m;
    string str;
    unordered_map<string, int> hash;
    cin >> n >> m;
    int total = 0;
    while (n--) {
        cin >> str;
        sort(str.begin(), str.end());
        hash[str]++;
        if (hash[str] % 2 == 0) {
            total += 2;
            hash[str] = 0;
        }
    }
    for (auto i : hash) {
        if (judge(i.first)) {
            total++;
            break;
        }
    }
    cout << total * m << endl;
    hash.clear();
}
