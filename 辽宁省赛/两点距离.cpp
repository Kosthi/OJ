#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    while (n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b) printf("0\n");
        else if(gcd(a, b) == 1)
            printf("1\n");
        else
            printf("2\n");
    }
}
