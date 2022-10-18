#include <iostream>

using namespace std;
int main(void) {
    int n;
    long long ch[51] = {0};
    ch[1] = 1;
    ch[2] = 1;
    for (int i = 3; i <= 50; i++) {
        ch[i] = ch[i - 1] + ch[i - 2];
    }
    
    while (cin >> n) {
        if (n == -1) {
            break;
        }
        printf("%lld\n", ch[n]);
    }
    return 0;
}
