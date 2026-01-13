#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2) 
{
    const char* p2 = s2;
    while (*p2 != '\0') {
        const char* p1 = s1;
        const char* temp = p2;
        while (*p1 != '\0' && *temp != '\0' && *p1 == *temp) 
        {
            p1++;
            temp++;
        }
        if (*p1 == '\0') {
            return p2 - s2;
        }
        p2++;
    }
    return -1;
}

int main() {
    const int max = 100;
    char s1[max], s2[max];
    cout << "s1: ";
    cin.getline(s1, max);
    cout << "s2: ";
    cin.getline(s2, max);
    int pos = indexof(s1, s2);
    cout << pos;
    return 0;
}