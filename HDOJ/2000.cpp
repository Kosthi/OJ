#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    int n, num, min, ind;
    while (cin >> n) {
        if (!n) break;
        int tn = n;
        min = INT32_MAX;
        vector<int> a(0), b(0);
        while (n) {
            cin >> num;
            if (num < min) {
                min = num;
                ind = tn - n;
            }
            a.push_back(num);
            n--;
        }
        swap(a[0], a[ind]);
        for (int i = 0; i < a.size(); i++) {
            if (i != a.size() - 1)
                cout << a[i] << " ";
            else
                cout << a[i] << endl;
        }
    }
    return 0;
}