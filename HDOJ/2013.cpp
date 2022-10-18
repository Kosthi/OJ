#include <iostream>

int main()
{
    using namespace std;
    int a, k = 0;
    while (cin >> a) {
        k = 1;
        while (--a) {
            k = (k + 1) * 2;
        }
        cout << k << endl;
    }
    return 0;
}
