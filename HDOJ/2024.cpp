#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main()
{
    using namespace std;
    int m;
    string str;
    while (cin >> m) {
        getchar();
        while(m--) {
            getline(cin, str);
            if (str[0] >= '0' && str[0] <= '9') {
                cout << "no" << endl;
                continue;
            }
            int i;
            for (i = 0; i < str.size(); i++) {
                if (str[i] == ' ') {
                    cout << "no" << endl;
                    break;
                }
                if (str[i] != '_') {
                    if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9')) {
                        cout << "no" << endl;
                        break;
                    }
                }
            }
            if (i == str.size())
                cout << "yes" << endl;
        }
    }
    return 0;
}
