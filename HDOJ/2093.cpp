#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sc, num, sum = 0;
    string str, name[1000];
    int time[1000], acm[1000];
    //while (cin >> n >> sc) {
    cin >> n >> sc;
        int i = 0, ac = 0;
        char ch;
        getchar();
        while (1) {
            ch = getchar();
            if (!(ch >= 'A' && ch <= 'Z')) break;
            while (ch != ' ') {
                name[i].push_back(ch);
                ch = getchar();
            }
            getchar();
            int k = n;
            while (k--) {
                char tr;
                cin >> num;
                if (num > 0) {
                    sum += num;
                    ac++;
                }
                tr = getchar();
                if (tr == '(') {
                    int a;
                    cin >> a;
                    sum += sc * a;
                    getchar();
                }
                if (tr == '\n') {
                    acm[i] = ac;
                    time[i] = sum;
                    i++;
                    ac = 0;
                    sum = 0;
                }
            }
        }
        //}
            //cout << i << endl;
        for (int p = 0; p < i; p++) {
            for (int j = p + 1; j < i; j++) {
                if (acm[p] < acm[j]) {
                    swap(name[p], name[j]);
                    swap(acm[p], acm[j]);
                    swap(time[p], time[j]);
                }
                else if (acm[p] == acm[j]) {
                    if (time[p] > time[j]) {
                        swap(name[p], name[j]);
                        swap(acm[p], acm[j]);
                        swap(time[p], time[j]);
                    }
                    else if (time[p] == time[j]) {
                        if (name[p] > name[j]) {
                            swap(name[p], name[j]);
                            swap(acm[p], acm[j]);
                            swap(time[p], time[j]);
                        }
                    }
                }
            }
        }
        for (int p = 0; p < i; p++) {
            printf("%-10s %2d %4d\n", name[p].c_str(), acm[p], time[p]);
        }
    return 0;
}
