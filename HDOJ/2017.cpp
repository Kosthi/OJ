#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string a;
    int n, sum = 0;
    while (cin >> n) {
        while (n--) {
            cin >> a;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] >= '0' && a[i] <= '9')
                    sum++;
            }
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
