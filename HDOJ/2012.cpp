#include <iostream>
#include <cmath>

bool isPrime(int);

int main()
{
    using namespace std;
    int a, b, i;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        if (a > b) swap(a, b);
        for (i = a; i <= b && isPrime(i * i + i + 41); i++);
        if (i <= b)
            cout << "Sorry" << endl;
        else
            cout << "OK" << endl;
    }
    return 0;
}

bool isPrime(int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
