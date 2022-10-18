#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int str[30][30];
    str[0][0] = 1;
    str[1][0] = 1, str[1][1] = 1;
    
    for (int i = 2; i < 30; i++) {
        str[i][0] = 1;
        str[i][i] = 1;
        for (int j = 1; j < i; j++) {
            str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
        }
    }
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            if (!i)
                cout << str[i][0] << endl;
            else
                cout << str[i][0] << ' ';
            for (int j = 1; j < i; j++) {
                cout << str[i][j] << ' ';
            }
            if (i) cout << str[i][i] << endl;
        }
        cout << endl;
    }
    return 0;
}
