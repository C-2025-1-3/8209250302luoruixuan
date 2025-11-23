#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g;
	cin >> a >> b;
	if (b > a)
	{
		c = a;
		a = b;
		b = c;
	}
	f = a;
	g = b;
	e = f;
	while (b != 0)
	{
		d = b;
		b = a % b;
		a = d;
	}
    cout << "最大公约数为:" << a << endl;
	while (e % f != 0 or e % g != 0)
		e++;
	cout << "最大公倍数是:" << e;
}