#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	int a = 0, b = 0, c = 0;
	while (a < size1 and b < size2)
	{
		if (list1[a] <= list2[b])
		{
			list3[c] = list1[a];
			a++;
		}
		else
		{
			list3[c] = list2[b];
			b++;
		}
		c++;
	}
	for (; a < size1; a++,c++)
	{
		list3[c] = list1[a];
	}
	for (; b < size2; b++, c++)
	{
		list3[c] = list2[b];
	}
}
int main()
{
	int list1[80];
	int list2[80];
	int i, j;
	cout << "输入第一个数组的长度和元素:";
	cin >> i;
	for (int a = 0; a < i; a++)
	{
		cin >> list1[a];
	}
	cout << "输入第二个数组的长度和元素:";
	cin >> j;
	for (int b = 0; b < j; b++)
	{
		cin >> list2[b];
	}
	int list3[160];
	merge(list1, i, list2, j, list3);
	for (int a = 0; a < i + j; a++)
	{
		cout << list3[a] << "\t";
	}
}