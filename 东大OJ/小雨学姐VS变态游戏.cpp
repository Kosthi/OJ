// https://blog.csdn.net/element137/article/details/75902537/

#include <iostream>

using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;
    while (n != 0) {
        sum += n / 5;
        n /= 5;
    }
    if (sum == 0) cout << "xiaoyunb!" << endl;
    else          cout << sum << endl;
}
