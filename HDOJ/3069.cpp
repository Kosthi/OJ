#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int R, n;
    vector<int> a;
    while (cin >> R >> n && R != -1 && n != -1) {
        a.clear();
        while (n--) {
            int num;
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        int i = 0, ans = 0;
        while (i < a.size()) {
            int s = a[i++];
            while (i < a.size() && a[i] <= s + R) i++;

            int p = a[i - 1];
            while (i < a.size() && a[i] <= p + R) i++;

            ans++;
        }
        cout << ans << endl;
    }
}
