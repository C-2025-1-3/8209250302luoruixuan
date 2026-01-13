#include<iostream>
using namespace std;
int* f()
{
    int* list = new int[4] {1, 2, 3, 4};  // C++11风格的初始化
    return list;
}
int main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;  // 释放动态数组
    return 0;
}