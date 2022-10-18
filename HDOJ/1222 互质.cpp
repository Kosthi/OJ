#include <iostream>
#include <math.h>

int gcd(int, int);

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (gcd(a, b) == 1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

int gcd(int a, int b) {
    if (!a || !b) return a > b ? a : b;
    for (int t; t = a % b; a = b, b = t);
    return b;
}
