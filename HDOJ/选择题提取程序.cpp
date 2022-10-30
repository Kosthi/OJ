#include <iostream>

using namespace std;
//int main()
//{
//    int r, c;
//    int num[100];
//    cin >> r >> c;
//    while (r--) {
//        for (int i = 0; i < c; i++) {
//            cin >> num[i];
//        }
//        for (int i = 0; i < c; i++) {
//            char tmp;
//            cin >> tmp;
//            printf("%d.%c\n", num[i], tmp);
//        }
//    }
//}

//多选
int main()
{
    int r, c;
    int num[100];
    cin >> r >> c;
    while (r--) {
        for (int i = 0; i < c; i++) {
            cin >> num[i];
        }
        //getchar();
        char tmp;
        int flag = 1, i = 0;
        while ((tmp = getchar()) != '\n') {
            //cout << num[i++];
            //cout << tmp << "fa" << endl;
            if (flag){
                printf("%d.", num[i++] + 1);
                flag = 0;
            }
            //tmp = getchar();
            if (tmp != ' ') {
                printf("%c", tmp);
            }
            else if (tmp == ' ') {
                printf("\n");
                printf("%d.", num[i++]);
            }
        }
    }
    printf("\n");
}
