#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, xn, xnp1;
	cin >> a;
	if (a < 0)
	{
		cout << "math error";
	}
	xn = a;
	while (true)
		{
			xnp1 = 0.5 * (xn + a / xn);
			if (abs(xnp1 - xn) < pow(10, -5))
				break;
			xn = xnp1;
		}
	cout << "a的平方根为:" << xn;
}