#include <iostream>

using namespace std;

int main(void) {
    long long a, b; // __int32
    while (cin >> hex >> a >> b) {
        if (a + b < 0) {
            cout << uppercase << '-' << hex << -(a + b) << endl;
        }
        else
            cout << uppercase << hex << (a + b) << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(void) {
    long long a, b;
    while (scanf("%llX %llX", &a, &b) != EOF) {
        printf(a + b < 0 ? "-%llX\n" : "%llX\n", a + b < 0 ? -a-b : a + b);
    }
    return 0;
}
