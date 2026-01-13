#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) 
{
    for (int i = 0; i < 26; i++) 
    {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i])) 
        {
            char ch = tolower(s[i]);
            counts[ch - 'a']++;
        }
    }
}
int main() {
    const int num = 26;
    const int max = 1000;
    int counts[num];
    char input[max];
    cout << "Enter a string:";
    cin.getline(input, max);
    count(input, counts);
    for (int i = 0; i < num; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }
    return 0;
}
