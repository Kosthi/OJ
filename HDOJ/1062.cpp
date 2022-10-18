#include <iostream>
#include <string>

int stoi(char);

int main(void) {
    using namespace std;
    string s1, s2;
    while (cin >> s1 >> s2) {
        int a = 0, b = 0;
        for (int i = 0; i < s1.size(); i++) {
            a = a * 16 + stoi(s1[i]);
        }
        for (int i = 0; i < s2.size(); i++) {
            b = b * 16 + stoi(s2[i]);
        }
        cout << a + b << endl;
    }
    return 0;
}

int stoi(char ch) {
    if ( ch >= '0' && ch <= '9')
        return ch - '0';
    if (ch >= 'A' && ch <= 'F')
        return ch- 'A' + 10;
    if (ch >= 'a' && ch <= 'f')
        return ch- 'a' + 10;
    return 0;
}
