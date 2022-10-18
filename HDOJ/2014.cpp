#include <iostream>
#include <vector>
#include <numeric>
#include<algorithm>

int main()
{
    using namespace std;
    vector<int> a(0);
    int n, tn;
    while (cin >> n) {
        vector<int> a(0);
        tn = n - 2;
        double sum = 0, sc;
        while (n--) {
            cin >> sc;
            a.push_back(sc);
        }
        sort(a.begin(), a.end());
        sum = accumulate(a.begin() + 1, a.end() - 1, 0);
        printf("%.2lf\n", sum / tn);
    }
    return 0;
}
