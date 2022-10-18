#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    using namespace std;
    int m, n, num;
    
    while (cin >> m >> n) {
        vector<int> a(0);
        vector<float> b(0);
        
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cin >> num;
                a.push_back(num);
            }
        
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = i * n; j < i * n + n; j++) {
                sum += a[j];
            }
            if (i != m - 1)
                printf("%.2f ", sum / (float)n);
            else
                printf("%.2f\n", sum / (float)n);
        }
        
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < a.size(); j += n) {
                sum += a[j];
            }
            b.push_back(sum / (float)m);
            if (i != n - 1)
                printf("%.2f ", sum / (float)m);
            else
                printf("%.2f\n", sum / (float)m);
        }
        
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int i;
            for (i = 0; i < n && a[j * n + i] >= b[i]; i++);
            if (i == n) sum++;
        }
        cout << sum << endl << endl;
    }
    return 0;
}

