#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        char section;
        int math_marks;
        int cls;

        Student(string n, int r, char s, int mm, int c)
        {
            name = n;
            roll = r;
            section = s;
            math_marks = mm;
            cls = c;
        }
};


int main()
{
    Student* rahim = new Student("Rahim", 123, 'A', 89, 7);
    Student* karim = new Student("Karim", 134, 'B', 96, 7);
    Student* nilo = new Student("Nilo", 125, 'C', 99, 7);

    if(rahim->math_marks > karim->math_marks && rahim->math_marks > nilo->math_marks)
    {
        cout << rahim->name;
    }
    else if(karim->math_marks > rahim->math_marks && karim->math_marks > nilo->math_marks)
    {
        cout << karim->name;
    }
    else
    {
        cout << nilo->name;
    }
}