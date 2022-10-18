#include <iostream>

using namespace std;

int main(void) {
    double a, b, sum = 0;
    string item;
    while (scanf("%s %lf %lf", item.c_str(), &a, &b) != EOF) {
        sum += a * b;
    }
    printf("%.1lf\n", sum);
    return 0;
}
