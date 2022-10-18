#include <iostream>
#include <string>

using namespace std;

int main(void) {
    char ch;
    int line;
    cin >> ch;
    while (ch != '@') {
        cin >> line;
        for (int j = line; j > 1; j--) {
            for (int i = 0; i < j - 1; i++) {
                printf(" ");
            }
            for (int i = 0; i < 2 * (line - j) + 1; i++) {
                if (!i || i == 2 * (line - j))
                    printf("%c", ch);
                else
                    printf(" ");
            }
            printf("\n");
        }
        for (int i = 0; i < line * 2 - 1; i++)
            printf("%c", ch);
        printf("\n");
        cin >> ch;
        if (ch != '@') printf("\n");
    }
}
