#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int x;
	int row;
	int h_num = 0;
	int z_num = 0;
	for (x = 2; z_num < 200; x++)
	{
		if (is_prime(x))
		{
			if (h_num < 10)
			{
				cout << x << "\t";
				h_num++;
				z_num++;
			}
			else
			{
				h_num = 1;
				cout << endl << x << "\t";
				z_num++;
			}
		}
	}
}
bool is_prime(int num)
{
	int  i = 2;
	while (num % i != 0)
	{
		i++;
	}
	if (i == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}