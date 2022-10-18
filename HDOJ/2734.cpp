=#include <iostream>

int main(void) {
    using namespace std;
    char ch;
    while (1) {
        int i = 1, sum = 0;
        while ((ch = getchar()) != '\n') {
            if (ch == '#') return 0;
            if (ch == ' ') ch = 64;
            sum += i++ * (ch - 64);
        }
        cout << sum << endl;
    }
    return 0;
}
