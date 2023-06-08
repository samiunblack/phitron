#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;

        void set_data(string name, int cls, char s, int id, int math_marks, int eng_marks)
        {
            this->name = name;
            this->cls = cls;
            this->s = s;
            this->id = id;
            this->math_marks = math_marks;
            this->eng_marks = eng_marks;
        }

        void get_data()
        {
            cout << name << " " << cls << " " << s << " " << id << " " << math_marks << " " << eng_marks << endl;
        }
};

bool cmp(Student a, Student b)
{
    int total = a.math_marks + a.eng_marks;
    int total2 = b.math_marks + b.eng_marks;

    if(total > total2) return true;
    else if(total == total2)
    {
        if(a.id < b.id) return true;
        else return false;
    }
    else return false;
}


int main()
{
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++)
    {
        string name;
        int cls, math_marks, eng_marks, id;
        char c;

        cin >> name >> cls >> c >> id >> math_marks >> eng_marks;

        a[i].set_data(name, cls, c, id, math_marks, eng_marks);
    }

    sort(a, a + n, cmp);

    for(int i = 0; i < n; i++)
    {
        a[i].get_data();
    }
}