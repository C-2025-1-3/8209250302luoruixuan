#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入一行字符（以回车结束）: ";
    while (cin.get(c) and c != '\n') {
        if (isalpha(c)) 
        {
            letters++;
        }
        else if (isdigit(c)) 
        {
            digits++;
        }
        else if (c == ' ') 
        {  
            spaces++;
        }
        else 
        {
            others++;
        }
    }
    cout << "统计结果：" << endl;
    cout << "英文字母: " << letters << " 个" << endl;
    cout << "空格: " << spaces << " 个" << endl;
    cout << "数字字符: " << digits << " 个" << endl;
    cout << "其他字符: " << others << " 个" << endl;
    return 0;
}