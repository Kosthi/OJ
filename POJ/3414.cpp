#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <stdlib.h>
typedef unsigned long long llu;
using namespace std;

int a, b, c;

struct Node {
    int a;
    int b;
    int step;
    string path;
    Node(int aa, int bb, int ss, string pp): a(aa), b(bb), step(ss), path(pp) {}
    Node() {}
};

Node myQueue[10000];
int qHead = 0;
int qTail = 1;


//int gcd(int k) {
//for (int i = 2; i <= sqrt(long double(k)); i++) {
//    if (k % i == 0) return 0;
//}
//return 1;
//}

void Bfs() {
    bool vis[100][100];
    memset(vis, false, sizeof vis);
    myQueue[qHead] = Node(0, 0, 0, "");
    vis[0][0] = true;
    while (qHead != qTail) {
        int tmpa= myQueue[qHead].a;
        int tmpb = myQueue[qHead].b;
        int ss = myQueue[qHead].step;
        string pp = myQueue[qHead].path;
        if (tmpa == c || tmpb == c) {
            cout << ss << endl;
            string newpp = pp.substr(0, pp.size() - 1);
            cout << newpp << endl;
            break;
        }
        if (vis[a][tmpb] != 1) {
            myQueue[qTail++] = Node(a, tmpb, ss + 1, pp + "FILL(1)\n");
            //myQueue[qTail++].father.push_back('0');
            vis[a][tmpb] = 1;
        }
        if (vis[tmpa][b] != 1) {
            myQueue[qTail++] = Node(tmpa, b, ss + 1, pp + "FILL(2)\n");
            //myQueue[qTail++].father.push_back('1');
            vis[tmpa][b] = 1;
        }
        if (vis[0][tmpb] != 1) {
            myQueue[qTail++] = Node(0, tmpb, ss + 1, pp + "DROP(1)\n");
            //myQueue[qTail++].father.push_back('2');
            vis[0][tmpb] = 1;
        }
        if (vis[tmpa][0] != 1) {
            myQueue[qTail++] = Node(tmpa, 0, ss + 1, pp + "DROP(2)\n");
            //myQueue[qTail++].father.push_back('3');
            vis[tmpa][0] = 1;
        }
        if ((tmpa + tmpb) > b) {
            if (vis[tmpa + tmpb - b][b] != 1) {
                myQueue[qTail++] = Node(tmpa + tmpb - b, b, ss + 1, pp + "POUR(1,2)\n");
                //myQueue[qTail++].father.push_back('4');
                vis[tmpa + tmpb - b][b] = 1;
            }
        }
        else {
            if (vis[0][tmpa + tmpb] != 1) {
                myQueue[qTail++] = Node(0, tmpa + tmpb, ss + 1, pp + "POUR(1,2)\n");
                //myQueue[qTail++].father.push_back('4');
                vis[0][tmpa + tmpb] = 1;
            }
        }

        if ((tmpa + tmpb) > a) {
            if (vis[a][tmpa + tmpb - a] != 1) {
                myQueue[qTail++] = Node(a, tmpa + tmpb - a, ss + 1, pp + "POUR(2,1)\n");
                //myQueue[qTail++].father.push_back('5');
                vis[a][tmpa + tmpb - a] = 1;
            }
        }
        else {
            if (vis[tmpa + tmpb][0] != 1) {
                myQueue[qTail++] = Node(tmpa + tmpb, 0, ss + 1, pp + "POUR(2,1)\n");
                vis[tmpa + tmpb][0] = 1;}
        }
        qHead++;
    }
    if (qHead == qTail)
        cout << "impossible" << endl;
}

int main() {
    while (cin >> a >> b >> c) {
        qHead = 0;
        qTail = 1;
        Bfs();
    }
}
