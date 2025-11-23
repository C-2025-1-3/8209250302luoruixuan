#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个英文字母：";
	cin >> a;
	if (a>=97)
		cout << char(a - 32) << endl;
	else 
		cout << a + 1 << endl;
}