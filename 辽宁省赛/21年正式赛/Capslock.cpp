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
    string str;
    cin >> str;
    int i = 1;
    for (; i < str.size() && str[i] >= 'A' && str[i] <= 'Z'; i++);
    if (i == str.size()) {
        int k = 1;
        if (str[0] >= 'a' && str[0] <= 'z') str[0] -= 32;
        else str[0] += 32;
        for (; k < str.size(); k++) {
            //if (str[k] >= 'a' && str[k] <= 'z') str[k] = str[k] - 32;
            str[k] = str[k] + 32;
        }
    }
    cout << str << endl;
}
