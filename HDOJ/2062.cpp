#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
long long gcd(long long, long long);
using namespace std;

long long f[10000] = {0};
//long long k[21] = {0};
int main(void) {
    f[1] = 1;
    for (int i = 2; i <= 20; i++) {
        f[i] = (f[i - 1] + 1) * i;
    }
    
    int n;
    long long m;
    while (cin >> n >> m) {
        int num[21] = {0}, k[22] = {0};
        for (int i = 1; i <= 20; i++) {
            k[i] = i;
        }
        while (n > 0 && m > 0) {
            int kl = n;
            long long temp = (m - 1) / (f[n] / n) + 1;
//            if (num[temp] != 0) {
//                for(temp += 1; temp <= kl; temp++){
//                    if (num[temp] == 0) break;
//                }
//            }
//            num[temp] = 1;
            m = m % (f[n] / n);
            if (!m) m = f[n] / n;
            m--;
            if (!m || !n) { // n走完次数呢
                cout << temp << endl;
            }
            else
                cout << temp << ' ';
            if (!m || !n) { // n走完次数呢
                cout << k[temp] << endl;
            }
            else
                cout << k[temp] << ' ';
            for (int i = temp; i < n; i++)
                k[i] = k[i + 1];
            n--;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
long long gcd(long long, long long);
using namespace std;

long long f[10000] = {0};
//long long k[21] = {0};
int main(void) {
    f[1] = 1;
    for (int i = 2; i <= 20; i++) {
        f[i] = f[i - 1] * (i - 1) + 1;
    }
    
    int n;
    long long m;
    while (cin >> n >> m) {
        int num[21] = {0}, k[22] = {0};
        for (int i = 1; i <= 20; i++) {
            k[i] = i;
        }
        while (n > 0 && m > 0) {
            int kl = n;
            long long temp = (m - 1) / f[n] + 1;
//            if (num[temp] != 0) {
//                for(temp += 1; temp <= kl; temp++){
//                    if (num[temp] == 0) break;
//                }
//            }
//            num[temp] = 1;
            m = m % f[n];
            if (!m) m = f[n];
            m--;
            if (!m || !n) { // n走完次数呢
                cout << k[temp] << endl;
            }
            else
                cout << k[temp] << ' ';
            for (int i = temp; i < n; i++)
                k[i] = k[i + 1];
            n--;
        }
    }
    return 0;
}
