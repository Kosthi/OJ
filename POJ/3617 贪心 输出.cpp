#include <iostream>

using namespace std;
int main() {
    char str[2001];
    string st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> str[i];
    int a = 0, b = n - 1;
    while (a <= b) {
        int left = 0;
        for (int i = 0; i + a <= b; i++) {
            if (str[a + i] < str[b - i]) {
                left = 1;
                break;
            }
            else if (str[a + i] > str[b - i]) {
                left = 0;
                break;
            }
        }
        if (left) st.push_back(str[a++]);
        else      st.push_back(str[b--]);
    }
    for (int i = 0; i < st.size(); i++) {
        cout << st[i];
        if ((i + 1) % 80 == 0) cout << endl;
    }
    //cout << endl;
}
