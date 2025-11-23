#include<iostream>
using namespace std;
int main()
{
	float a, b, c, C;
	cout << "请分别输入三边边长：";
	cin >> a >> b >> c;
	if (a + b > c and b + c > a and a + c > b)
	{
		C = a + b + c;
		cout << "三角形的周长是：" << C << endl;
		if (a == b or b == c or a == c)
			cout << "是等腰三角形" << endl;
		else
			cout << "不是等腰三角形" << endl;
	}
	else
	{
		cout << "无法构成三角形" << endl;
	}

}