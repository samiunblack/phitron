#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char s;
        int math_marks;
        int eng_marks;

        void set_data(string name, int cls, char s, int math_marks, int eng_marks)
        {
            this->name = name;
            this->cls = cls;
            this->s = s;
            this->math_marks = math_marks;
            this->eng_marks = eng_marks;
        }

        void get_data()
        {
            cout << name << " " << cls << " " << s << " " << math_marks << " " << eng_marks << endl;
        }
};


int main()
{
    int n;
    cin >> n;
    Student a[n];

    for(int i = 0; i < n;i++)
    {
        string name;
        int cls, math_marks, eng_marks;
        char c;
        cin >> name >> cls >> c >> math_marks >> eng_marks;
        a[i].set_data(name, cls, c, math_marks, eng_marks);
    }

    reverse(a, a + n);

    for(int i = 0; i < n;i++)
    {

        a[i].get_data();
    }
}