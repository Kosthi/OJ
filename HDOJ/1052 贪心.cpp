#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    vector<int> a(0), b(0);
    while (cin >> n) {
        if (!n) break;
        int k = 2, sum = 0;
        a.clear();
        b.clear();
        while (k--) {
            int g = n;
            while (g--) {
                int num;
                cin >> num;
                if (k == 1) {
                    a.push_back(num);
                } else {
                    b.push_back(num);
                }
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        // 贪心算法闪亮登场
        int min_t = 0, min_k = 0;
        int max_t = n - 1, max_k = n - 1;
        
        while (n--) {
            if (a[min_t] > b[min_k]) {
                sum += 200;
                min_t++;
                min_k++;
            }
            else if (a[min_t] < b[min_k]) {
                if (a[min_t] != b[max_k]) {
                    sum -= 200;
                    min_t++;
                    max_k--;
                }
            }
            else {
                if (a[max_t] > b[max_k]) {
                    sum += 200;
                    max_t--;
                    max_k--;
                    //continue;
                } else {
                    if (a[min_t] != b[max_k]) {
                        sum -= 200;
                        min_t++;
                        max_k--;
                        //continue;
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
