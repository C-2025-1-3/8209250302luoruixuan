#include<iostream>
using namespace std;
int gcd(int& x, int& y);
int lcm(int& x, int& y);
int main()
{
	int a, b;
	cin >> a >> b;
	int& A = a;
	int& B = b;
	gcd(A, B);
	lcm(A, B);
	return 0;
}
int gcd(int& x, int& y)
{
	int a, b, c, d;
	a = x;
	b = y;
	if (b > a)
	{
		c = a;
		a = b;
		b = c;
	}
	
	while (b != 0)
	{
		d = b;
		b = a % b;
		a = d;
	}
	cout << "最大公约数为:" << a << endl;
	return 0;
}
int lcm(int& x, int& y)
{
	int a, b, e, f, g;
	a = x;
	b = y;
	f = a;
	g = b;
	e = f;
	while (e % f != 0 or e % g != 0)
		e++;
	cout << "最大公倍数是:" << e;
	return 0;
}