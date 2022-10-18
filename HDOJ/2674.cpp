#include <iostream>
#include <string>
#include <cmath>
long long gcd(long long, long long);
using namespace std;

int f[2009] = {0};

int main(void) {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 41; i++) {
        f[i] = (f[i - 1] * i) % 2009;
    }
    int n;
    while (cin >> n) {
        if (n <= 41) cout << f[n] << endl;
        else cout << '0' << endl;
    }
    return 0;
}


int main(void) {
    int n, cnt;
    cin >> cnt;
    //while (cin >> cnt) {
        while (cnt--) {
            cin >> n;
            double sum = 0;
            for (int i = n; i >= 1; i--) {
                sum += log(i);
            }
            //int sum = int((0.5 * log(2.0 * n * PI)+n * log(n)-n)/(log(10.0))+1);
            cout << int(sum / log(10)) + 1 << endl;
        }
    //}
    return 0;
}
