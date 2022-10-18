#include <iostream>
#include <string>
#include <cmath>

#define PI 3.1415926535
int gcd(int, int);
using namespace std;

int main(void) {
    string str, a, b, temp;
    int n, num[20];
    while (cin >> n) {
        while (n--) {
            cin >> str;
            int i = 2;
            for (; str[i] != '(' && i < str.size(); i++) {
                a.push_back(str[i]);
                temp.push_back('0');
            }
            if (i != str.size()) {
                for (int k = i + 1; str[k] != ')'; k++) {
                    b.push_back(str[k]);
                    temp.push_back('9');
                }
                b = a + b;
                int zi;
                if (a.size() != 0)
                    zi = stoi(b) - stoi(a);
                else
                    zi = stoi(b);
                reverse(temp.begin(), temp.end());
                int mu = stoi(temp);
                int t = gcd(zi, mu);
                printf("%d/%d\n", zi / t, mu / t);
            }
            else {
                temp.push_back('1'); // 0.0001
                reverse(temp.begin(), temp.end());
                int zi = stoi(a), mu = stoi(temp);
                int t = gcd(zi, mu);
                printf("%d/%d\n", zi / t, mu / t);
            }
            a.clear();
            b.clear();
            temp.clear();
        }
    }
}

int gcd(int a, int b) {
    if (!a || !b) a > b ? a : b;
    for (int t; t = a % b; a = b, b = t);
    return b;
}
