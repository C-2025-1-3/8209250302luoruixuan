#include<iostream>
#include<cstdio>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << "\t" << "Fahrenheit" <<"\t" <<"|" <<"\t" << "Fahrenheit" << "\t" << "Celsius" << endl;
	float she, hua;
	for (she = 40.0, hua = 120.0; she > 31.0; she--, hua -= 10)
	{
		printf("%.1f\t", she);
		printf("%.1f\t\t\t", celsius_to_fah(she));
		printf("%.1f\t\t", hua);
		printf("%.1f\n", fahrenheit_to_cels(hua));
	}
}