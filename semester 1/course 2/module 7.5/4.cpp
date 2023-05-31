#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
    
        void set_data(string name, int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }

        void get_data()
        {
            cout << name << " " << roll << " " << marks << endl;
        }
};

bool cmp(Student a, Student b)
{
    if(a.marks > b.marks) return true;
    else if(a.marks == b.marks)
    {
        if(a.roll < b.roll) return true;
        else return false;
    }
    else return false;
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for(int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        arr[i].set_data(name, roll, marks);
    }

    sort(arr, arr + n, cmp);

    for(int i = 0; i < n; i++)
    {
        arr[i].get_data();
    }
}