#include <iostream>

int main(void) {
    using namespace std;
    long a, b;
    long sum1, sum2;
    while (scanf("%ld %ld", &a, &b) != EOF) {
        if (a > b) swap(a, b); // 大小
        sum1 = 0, sum2 = 0;
        for (long i = a; i <= b; i++) {
            if (i % 2) {
                sum2 += i * i * i;
            }
            else
                sum1 += i * i;
        }
        printf("%ld %ld\n", sum1, sum2);
    }
    return 0;
}
