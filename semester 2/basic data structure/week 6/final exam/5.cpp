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
            if(a.marks > b.marks) return false;
            if(a.marks == b.marks)
            {
                if(a.roll > b.roll) return true;
                if(a.roll == b.roll) return true;
                if(a.roll < b.roll) return false;
            }

            return false;
        }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }

    int q;
    cin >> q;

    while(q--)
    {
        int i;
        cin >> i;

        if(i == 0)
        {
            string name;
            int roll, marks;

            cin >> name >> roll >> marks;
            Student st(name, roll, marks);
            pq.push(st);
            
            Student s = pq.top();

            cout << s.name << " " << s.roll << " " << s.marks << endl;
        }

        if(i == 1)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else
            {
            Student s = pq.top();
            cout << s.name << " " << s.roll << " " << s.marks << endl;      
            }
            
        }

        if(i == 2)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if(pq.empty()) cout << "Empty" << endl;
                else{
Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
                }
                
            }
        }
    }
}