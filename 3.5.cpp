#include <iostream>
using namespace std;
int peachCount(int day) 
{
    if (day == 10) 
    {
        return 1;
    }
    else
        return (peachCount(day + 1) + 1) * 2;
}

int main()
{
    int totalPeaches = peachCount(1);
    cout << "第一天猴子共摘" << totalPeaches << "个桃子" << endl;
}