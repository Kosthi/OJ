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
    if (str.size() > 20) {
        cout << "BigInteger" << endl;
        return 0;
    }
    __int128 a = 0;
    for (int i = 0; i < str.size(); i++) {
        a = a * 10 + str[i] - '0';
    }
    if (a < 128)
        cout << "byte" << endl;
    else if (a < 32768)
        cout << "short" << endl;
    else if (a < 2147483648)
        cout << "int" << endl;
    else if (a < 9223372036854775808)
        cout << "long" << endl;
    else
        cout << "BigInteger" << endl;
}
