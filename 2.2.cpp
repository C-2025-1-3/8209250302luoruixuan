#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "输入x：";
	cin >> x;
	if (0 < x and x < 10)
	{
		if (0 < x and x < 1)
			y = 3 - (2 * x);
		else if (1 <= x and x < 5)
			y = 2 / (4 * x) + 1;
		else if (5 <= x and x < 10)
			y = x * x;
    cout << y;
	}
	else
		cout << "不在定义域内";
	
}