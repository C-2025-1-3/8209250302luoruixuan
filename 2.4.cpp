#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	float result = 0;
	char a;
	cin >> num1 >> a >> num2;
	if (a == 43)
	{
		result = num1 + num2;
	}
	if (a == 45)
	{
		result = num1 - num2;
	}
	if (a == 42)
	{
		result = num1 * num2;
	}
	if (a == 47)
	{
		if (num2 == 0)
			cout << "Math Error";
		else
			result = num1 / num2;
	}
	if (a == 37)
	{
		result = num1 % num2;
	}
	cout << result;
}