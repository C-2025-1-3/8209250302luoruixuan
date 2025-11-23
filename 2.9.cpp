#include<iostream>
using namespace std;
int main()
{
	float price, sumprice, day, num, arrange;
	sumprice = 0;
	num = 2;
	day = 0;
	while (num<=100)
	{
		price = 0.8 * num;
		sumprice = sumprice + price;
		num = 2 * num;
		day++;
	}
	arrange = sumprice / day;
	cout << "平均每天花" << arrange << "元";
}