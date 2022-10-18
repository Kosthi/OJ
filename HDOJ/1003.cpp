#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
long long gcd(long long, long long);
using namespace std;

long long f[10000] = {0};
//long long k[21] = {0};
int main(void) {
    int n, num[20];
    while (cin >> n) {
        int i = 1;
        while (n--) {
            int num, temp = 1, begin, end, cnt, max = -3000, sum = 0;
            cin >> cnt;
            for (int k = 1; k <= cnt; k++) {
                cin >> num;
                sum += num;
                if (sum > max) {
                    max = sum;
                    begin = temp;
                    end = k;
                }
                if (sum < 0) {
                    sum = num;
                    temp = k;
                }
            }
            if (!n) {
                printf("Case %d:\n%d %d %d\n", i++, max, begin, end);
            }
            else {
                printf("Case %d:\n%d %d %d\n\n", i++, max, begin, end);
            }
        }
    }

}
