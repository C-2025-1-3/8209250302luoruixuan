#include <iostream>
using namespace std;
class Point 
{
private:
    int x;
    int y; 
public:
    Point() 
    {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) 
    {
        x = 60 + i;
        y = 80 + j;
    }
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    Point p1;
    cout << "初始坐标：" << endl;
    p1.display();
    cout << "修改坐标：" << endl;
    p1.setPoint(10, 20); 
    cout << "修改后的坐标：" << endl;
    p1.display();
    return 0;
}