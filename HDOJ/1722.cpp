#include <iostream>

long long gcd(long long, long long);

using namespace std;

int main(void) { // 切蛋糕 重点在刀 份数 而不是具体的值
    int a, b;
    while (cin >> a >> b) {
        cout << a + b - gcd(a, b) << endl;
    }
}

long long gcd(long long a, long long b) {
    if (!b) return a;
    return gcd(b, a % b);
}
