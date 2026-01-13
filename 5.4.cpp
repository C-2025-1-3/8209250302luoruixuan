#include <iostream>
using namespace std;
class Student {
private:
    int id;
    float score;
public:
    void setInfo(int i, float s) 
    {
        id = i;
        score = s;
    }
    int getId()
    {
        return id;
    }
    float getScore()
    {
        return score;
    }
    void display()
    {
        cout << "Ñ§ºÅ: " << id << ", ³É¼¨: " << score << endl;
    }
};
void max(Student* students, int n)
{
    Student* maxStudent = &students[0];
    float maxScore = students[0].getScore();
    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > maxScore) 
        {
            maxScore = students[i].getScore();
            maxStudent = &students[i]; 
        }
    }
    cout << "Ñ§ºÅ: " << maxStudent->getId() << endl;
}
int main() {
    const int N = 5;
    Student students[N]; 
    students[0].setInfo(1001, 85.5);
    students[1].setInfo(1002, 92.0);
    students[2].setInfo(1003, 78.5);
    students[3].setInfo(1004, 95.5); 
    students[4].setInfo(1005, 88.0);
    max(students, N);
    return 0;
}