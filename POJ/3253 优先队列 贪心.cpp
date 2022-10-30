#include <iostream>
#include <queue>

using namespace std;
// 优先队列
int main() {
    priority_queue<int, vector<int>, greater<int>> q;
    int cnt;
    long long sum = 0, n, a, b;
    cin >> cnt;
    while (cnt--) {
        cin >> n;
        q.push(n);
    }
    while (q.size() != 1) {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        q.push(a + b);
        sum += a + b;
    }
    cout << sum << endl;
    while (!q.empty()) {
        q.pop();
    }
    return 0;
}
// 贪心


