#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <stdlib.h>
typedef unsigned long long llu;
using namespace std;

int ln, rn;
struct Node {
    int num;
    int step;
    Node(int n, int s): num(n), step(s) {}
    Node() {}
};

Node myQueue[400000];
int qHead = 0;
int qTail = 1;


int gcd(int k) {
for (int i = 2; i <= sqrt(long double(k)); i++) {
    if (k % i == 0) return 0;
}
return 1;
}

void Bfs(int status) {
    //int newStatus;
    set<int> expanded;
    myQueue[qHead] = Node(status, 0);
    expanded.insert(status);
    while (qHead != qTail) {
        status = myQueue[qHead].num;
        int step = myQueue[qHead].step;
        
        if (status == rn) {
            printf("%d\n", step);
            break;
        }
        //for (int i = status + 1; i <= rn; i++) {
        string str;
        while (status) {
            int kk = status % 10;
            str.push_back(kk + '0');
            status /= 10;
        }
        reverse(str.begin(), str.end());
            for (int tmp = 3; tmp >= 0; tmp--) {
                char ch = str[tmp];
                for (int j = (tmp == 0) ? 1 : 0; j <= 9; j++) {
                    str[tmp] = j + '0';
                    int num = strtol(str.c_str(), 0, 10);
                    if (gcd(num)) {
                        //cout << num << endl;
                        if (expanded.find(num) == expanded.end()) {
                            myQueue[qTail++] = Node(num, step + 1);
                            expanded.insert(num);
                        }
                        //break;
                    }
                }
                str[tmp] = ch;
            }
        qHead++;
    }
}
    
int main() {
    int n;
    while (~scanf("%d", &n)) {
        //Bfs(1, 1);
        while (n--) {
            qHead = 0;
            qTail = 1;
            cin >> ln >> rn;
            Bfs(ln);
            }
        }
}
