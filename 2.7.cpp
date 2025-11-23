#include<iostream>
using namespace std;
int main()
{
	int i, n;
	for (n = 1; n < 6; n++)
	{
		for (i = 1; i < n + 1; i++)
		{
			cout << "*";
		}
		cout<<endl;
	}
}