#include <iostream>
#include <string>

using namespace std;
// 注意操作系统的编码
// String采用一种更灵活的方式进行存储。在String中，一个英文字符占1个字节，而中文字符根据编码的不同所占字节数也不同。在UTF-8编码下，一个中文字符占3个字节；而使用GBK编码时一个中文字符占2个字节。

int main()
{
    int n, sum;
    string str;
    while (cin >> n) {
        getchar();
        while (n--) {
            sum = 0;
            getline(cin, str);
            for (int i = 0; i < str.size(); i++) {
                if (str[i] < 0) {
                    sum++;
                }
            }
            cout << sum / 2 << endl;
        }
    }
    return 0;
}
