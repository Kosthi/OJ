#include <iostream>

long long gcd(long long, long long);

using namespace std;
int cnt = 0;
int isPrime[1000000] = {0};
int Prime[1000000] = {0};


int main(void) {
    
    for (int i = 2; i <= 1000000; i++) {
        if (!isPrime[i]) Prime[++cnt] = i;
        for (int j = 1; j <= cnt && i * Prime[j] <= 1000000; j ++) {
            isPrime[i * Prime[j]] = 1;
            if (i % Prime[j] == 0) break;
        }
    }
    
    int n;
    while (scanf("%d", &n)) {
        if (n == 1) cout << 0 << endl;
        for (int k = cnt; k >= 1; k--) {
            if (n % Prime[k] == 0) {
                cout << k << endl;
                break;
            }
        }
    }
}

#include <iostream>
#define max 1000000

using namespace std;

int main(void) {
    int a[max], cnt = 0;
    
    for (int i = 2; i < max; i++) {
        if (a[i] == 0) {
            cnt++;
            for (int j = i; j < max; j += i) {
                a[j] = cnt;
            }
        }
    }
    
    while (scanf("%d", &cnt) != EOF) {
        printf("%d\n", a[cnt]);
    }
}
