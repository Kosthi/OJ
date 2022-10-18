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
    while (cin >> m >> n && m + n) {
        int k = m * m - 4 * n;
//        if (int(k) == k && k >= 0) cout << "Yes" << endl;
//        else cout << "No" << endl;
        if (k < 0) {
            cout << "No" << endl;
        } else {
            double a = (m + sqrt(k)) / 2.0;
            double b = (m - sqrt(k)) / 2.0;
            if (a == int(a) || b == int(b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
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


