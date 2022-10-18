#include <iostream>

int main(void) {
    using namespace std;
    int n;
    double num;
    double sum = 0;
    n = 12;
    while (n--) {
        cin >> num;
        sum += num;
    }
    cout << "$" << sum / 12.0 << endl;
}
