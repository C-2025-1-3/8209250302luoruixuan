#include<iostream>
using namespace std;
void BubbleSort(double arr[], int n);
int main()
{
    double ceshi[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> ceshi[i];
    }
    BubbleSort(ceshi, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << ceshi[i] << "\t";
    }
}
void BubbleSort(double arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        { 
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}