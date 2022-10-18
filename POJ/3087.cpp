#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <stdlib.h>
typedef unsigned long long llu;
using namespace std;

int ln, rn, n, total;
string str[2], target;
struct Node {
    string num;
    int step;
    Node(string n, int s): num(n), step(s) {}
    Node() {}
};

Node myQueue[400000];
int qHead = 0;
int qTail = 1;

void Bfs() {
    string temp;
        for (int i = 0; i < ln; i++) {
            for (int j = 1; j >= 0; j--)
                temp.push_back(str[j][i]);
        }
    init = temp;
    set<string> expanded;
    myQueue[qHead] = Node(temp, 1);
    expanded.insert(temp);
    while (qHead != qTail) {
        temp = myQueue[qHead].num;
        //cout << temp << endl;
        int step = myQueue[qHead].step;
        if (temp == target) {
            printf("%d %d\n", total - n, step);
            break;
        }
        str[0] = temp.substr(0, ln);
        str[1] = temp.substr(ln, ln * 2);
        temp.clear();
        for (int i = 0; i < ln; i++) {
            for (int j = 1; j >= 0; j--)
                temp.push_back(str[j][i]);
        }
        
        if (expanded.find(temp) == expanded.end()) {
            myQueue[qTail++] = Node(temp, step + 1);
            expanded.insert(temp);
        }
        else {
            printf("%d -1\n", total - n);
            break;
        }
        qHead++;
    }
}
    
int main() {
    while (~scanf("%d", &n)) {
        total = n;
        while (n--) {
            qHead = 0;
            qTail = 1;
            cin >> ln;
            cin >> str[0];
            cin >> str[1];
            cin >> target;
            Bfs();
            }
        }
}
