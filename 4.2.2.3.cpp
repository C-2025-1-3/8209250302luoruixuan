#include <iostream>
using namespace std;
void bubbleSort(int* arr, int n);
int main() {
    int n;
    int* arr = nullptr; 
    cout << "请输入数组元素个数: ";
    cin >> n;
    arr = new int[n];
    cout << "请输入 " << n << " 个整数: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "指针地址:" << &arr << endl;
    cout << "指针指向的地址:" << arr << endl;
    cout << "指针指向的内容:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "  arr[" << i << "] = " << *(arr + i) << " (地址: " << arr + i << ")" << endl;
    }
    bubbleSort(arr, n);
    cout << "\n排序后的数组:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++) 
    {
        cout << *(arr + i);
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    delete[] arr;
    arr = nullptr; 
    return 0;
}
void bubbleSort(int* arr, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (*(arr + j) > *(arr + j + 1)) 
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}