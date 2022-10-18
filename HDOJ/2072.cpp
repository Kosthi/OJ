#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int sum = 0;
    string str;
    unordered_map<string, int> map;
    while (cin >> str) {
        if(str[0] == '#') break;
        if (!map[str]) {
            map[str] = 1;
            sum++;
        }
        if (getchar() == '\n') {
            map.clear();
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
