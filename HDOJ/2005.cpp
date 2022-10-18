#include <iostream>

int main(void) {
    using namespace std;
    int year, month, day;
    int sum;
    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d/%d/%d", &year, &month, &day) == 3) {
        sum = 0;
        for (int i = 0; i < month - 1; i++) {
            sum += m[i];
        }
        sum += day;
        if (month >= 3 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
            sum++;
        cout << sum << endl;
    }
    return 0;
}
