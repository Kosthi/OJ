#include<iostream>

int main(void) {
    using namespace std;
    int num;
    int a, b;

    while (cin >> num) {
        while (num--) {
            cin >> a >> b;
            cout << a + b << endl;
        }
    }
    return 0;
}
