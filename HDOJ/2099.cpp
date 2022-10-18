#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a, b;
    string str;
    while (cin >> a >> b && a + b) {
        str.clear();
        for (int i = a * 100; i < a * 100 + 100; i++) {
            if (i % b == 0) {
                string temp = to_string(i);
                str.push_back(temp[temp.size() - 2]);
                str.push_back(temp[temp.size() - 1]);
            }
        }
        for (int i = 0; i < str.size(); i += 2) {
            if (i != str.size() - 2) {
                cout << str[i] << str[i + 1] << ' ';
            } else {
                cout << str[i] << str[i + 1] << endl;
            }
        }
    }
    return 0;
}
