#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
        int marks;

        Student(string name, int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks < b.marks) return true;
            else return false;
        }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    for(int i = 0; i < 5; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }

    while(!pq.empty())
    {
        cout << pq.top().marks << endl;
        pq.pop();
    }
}