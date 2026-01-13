#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString) 
{
    int i = 0;
    int result = 0;
    for (; hexString[i] != '\0'; i++) {
        char ch = hexString[i];
        int digit = 0;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        result = result * 16 + digit;
    }
    return result;
}
int main()
{
    const int max = 1000;
    char hexString[max];
    cout << "请输入一个十六进制的数:";
    cin.getline(hexString, max);
    cout << parseHex(hexString);
}