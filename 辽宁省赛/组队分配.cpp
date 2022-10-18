#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int k, n;
    cin >> k;
    while (k--) {
        int i = 0;
        unordered_map<int, string> map;
        cin >> n;
        for (int k = 0; k < 3 * n; k++) {
            string name, temp;
            int rank;
            cin >> name;
            cin >> rank;
            //getline(cin, temp);
//            cout << temp << endl;
//            int j = 0;
//            for (; !(temp[j] >= '0' && temp[j] <= '9'); j++)
//                name.push_back(temp[j]);
//            rank = (temp[j] - '0');
//            for (; temp[j] >= '0' && temp[j] <= '9'; j++)
//                rank = rank * 10 + temp[j] - '0';
            map[rank] = name;
            //map.insert(temp, name);
        }
        
        while (i < n) {
            printf("ACM-%d %s %s %s\n", i, map[i * 3 + 3].c_str(), map[i * 3 + 2].c_str(), map[i * 3 + 1].c_str());
            i++;
        }
    }
}
