#include <iostream>
#include <vector>
#include <string>

int gcd(int, int);

int main()
{
    using namespace std;
    int n, num, sum;
    string str;
    while (cin >> n) {
        sum = 1;
        vector<int> a(0);
        
        while (n--) {
            cin >> num;
            a.push_back(num);
        }
        
        for (int i = 0; i < a.size(); i++) {
            sum *= a[i] / gcd(sum, a[i]); // 熟记
        }
        
        cout << sum << endl;
    }
    return 0;
}

int gcd(int a, int b) {
    if (!b) return a;
    int c = a % b;
    return gcd(b, c);
}

