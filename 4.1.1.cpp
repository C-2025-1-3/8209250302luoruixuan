#include<iostream>
using namespace std;
int main()
{
	int first[10];
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> first[i];
	}
	int second[10];
	int k = 1;
	int a;
	second[0] = first[0];
	for (int i = 1; i < 10; i++)
	{
		a = 0;
		for (int j = 0; j < k; j++)
		{
			if (first[i] != second[j])
			{
				a++;
			}
		}
		if (a == k)
		{
			second[k] = first[i];
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << second[i] << "\t";
	}
}