#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
long long gcd(long long, long long);
using namespace std;

int f[2009] = {0};

int main(void) {
    int m, n;
    //cin >> cnt;
    //while (cin >> cnt) {
    while (cin >> n) {
        while (n--) {
            int a;
            cin >> a;
            long long c = pow(3, a);
            cout << c << endl;
        }
    }
    return 0;
}

long long gcd(long long n, long long m) {
    int temp;
    temp = n % m;
    while (temp != 0) {
        n = m;
        m = temp;
        temp = n % m;
    }
    return m;
}
