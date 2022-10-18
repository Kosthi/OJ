#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string str, temp;
    while (cin >> str) {
        char max = '0';
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                if (str[i] > max) {
                    max = str[i];
                }
            }
            if (str[i] >= 'A' && str[i] <= 'Z') {
                if (str[i] > max) {
                    max = str[i];
                }
            }
        }
        int cnr = 0, ind = 0;
        temp = str;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == max && i != str.size() - 1) {
                ind += i - cnr;
                temp.insert(ind + 1, "(max)");
                ind += 5;
                cnr = i;
            }
        }
        if (temp[temp.size() - 1] == max) temp.append("(max)");
        cout << temp << endl;
    }
    return 0;
}

