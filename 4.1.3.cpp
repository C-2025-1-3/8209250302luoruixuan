#include<iostream>
using namespace std;
int main()
{
	bool zhuangtai[100];
	for (int i = 0; i < 100; i++)
	{
		zhuangtai[i] = false;
	}
	for (int i = 1; i < 101; i++)
	{
		for (int j = i - 1; j < 100; j = j + i)
		{
			zhuangtai[j] = !zhuangtai[j];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (zhuangtai[i] == true)
		{
			cout << i + 1 << "\t";
		}
	}
}
