#include <iostream>
#include <math.h>

int main(void) {
    using namespace std;
    float a, b, c, d;
    float distance;
    while (cin >> a >> b >> c >> d) {
        distance = sqrt((a - c) * (a - c) + (b - d) * (b - d));
        printf("%.2f\n", distance);
    }
    return 0;
}
