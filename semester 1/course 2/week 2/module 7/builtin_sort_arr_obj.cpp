#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int marks;
        int id;

        void set_data(string name, int marks, int id)
        {
            this->name = name;
            this->marks = marks;
            this->id = id;
        }

        void get_data()
        {
            cout << name << " " << id << " " << marks << endl;
        }
};

bool compare(Student i, Student j)
{
    if(i.marks < j.marks) return true;
    else return false;
}

int main()
{
    Student arr[5];

    for(int i = 0; i < 5; i++)
    {
        string name;
        int marks, id;

        getline(cin, name);
        cin >> marks >> id;
        cin.ignore();

        arr[i].set_data(name, marks, id);
    }

    sort(arr, arr + 5, compare);

    for(int i = 0; i < 5; i++)
    {
        arr[i].get_data();
    }
}