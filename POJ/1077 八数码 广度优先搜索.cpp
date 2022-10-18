#include <iostream>
#include <bitset>
#include <cstring>
#include <cstdio>
#include <set>

using namespace std;
int goalStatus = 123456780;
const int MAXS = 400000;
char result[MAXS];

struct Node {
    int status;
    int father;
    char move;
    Node(int s, int f, char m): status(s), father(f), move(m) {}
    Node() {}
};

Node myQueue[MAXS];
int qHead = 0;
int qTail = 1;
char moves[] = "udrl";

int NewStatus(int status, char move) {
    char temp[20];
    int zeroPos;
    sprintf(temp, "%09d", status);
    for (int i = 0; i < 9; i++)
        if (temp[i] == '0') {
            zeroPos = i;
            break;
        }

    switch (move) {
        case 'u':
            if (zeroPos - 3 < 0)
                return -1;
            else {
                temp[zeroPos] = temp[zeroPos - 3];
                temp[zeroPos - 3] = '0';
            }
            break;
            case 'd':
                if (zeroPos + 3 > 8)
                    return -1;
                else {
                    temp[zeroPos] = temp[zeroPos + 3];
                    temp[zeroPos + 3] = '0';
                }
                break;
            case 'r':
                if (zeroPos % 3 == 2)
                    return -1;
                else {
                    temp[zeroPos] = temp[zeroPos + 1];
                    temp[zeroPos + 1] = '0';
                }
                break;
            case 'l':
                if (zeroPos % 3 == 0)
                    return -1;
                else {
                    temp[zeroPos] = temp[zeroPos - 1];
                    temp[zeroPos - 1] = '0';
                }
                break;
    }
    return atoi(temp);
}

bool Bfs(int status) {
    int newStatus;
    set<int> expanded;
    myQueue[qHead] = Node(status, -1, 0);
    expanded.insert(status);
    while (qHead != qTail) {
        status = myQueue[qHead].status;
        if (status == goalStatus)
            return true;
        for (int i = 0; i < 4; i++) {
            newStatus = NewStatus(status, moves[i]);
            if (newStatus == -1)
                continue;
            if (expanded.find(newStatus) != expanded.end())
                continue;
            expanded.insert(newStatus);
            myQueue[qTail++] = Node(newStatus, qHead, moves[i]);
        }
        qHead++;
    }
    return false;
}

int main() {
    char line1[50], line2[50];
    while (cin.getline(line1, 48)) {
        int i, j;
        for (i = 0, j = 0; line1[i]; i++) {
            if (line1[i] != ' ') {
                if (line1[i] == 'x')
                    line2[j++] = '0';
                else
                    line2[j++] = line1[i++];
            }
        }
        line2[j] = 0;
        if (Bfs(atoi(line2))) {
            int moves = 0;
            int pos = qHead;
            do {
                result[moves++] = myQueue[pos].move;
                pos = myQueue[pos].father;
            } while (pos);
            for (int i = moves - 1; i >= 0; i--) {
                cout << result[i];
            }
            cout << endl;
        }
        else
            cout << "unsolvable" << endl;
    }
}
