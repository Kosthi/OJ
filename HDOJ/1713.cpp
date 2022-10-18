#include <iostream>

long long gcd(long long, long long);

using namespace std;

int main(void) {
    long long a, b, c, d;
    int n;
    cin >> n;
    while (n--) {
        scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
        
        long long t = gcd(a, b);
        a /= t;
        b /= t;
        t = gcd(c, d);
        c = c / t;
        d = d / t;
        
        a = a / gcd(a, c) * c;
        if (gcd(b, d) == 1) {
            cout << a << endl;
        } else {
            cout << a << '/' << gcd(b, d) << endl;
        }
    }
    return 0;
}

long long gcd(long long a, long long b) {
    if (!b) return a;
    return gcd(b, a % b);
}
