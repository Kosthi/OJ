#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    int n, target, num;
    while (cin >> n >> target) {
        if (n == 0 && target == 0) break;
        vector<int> a(0);
        while (n--) {
            cin >> num;
            a.push_back(num);
        }
        a.push_back(target);
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++) {
            if (i != a.size() - 1)
                cout << a[i] << " ";
            else
                cout << a[i] << endl;
        }
    }
    return 0;
}

