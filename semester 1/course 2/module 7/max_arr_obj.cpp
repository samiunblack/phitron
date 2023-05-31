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

    Student mx;
    mx.marks = INT_MIN;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i].marks > mx.marks)
        {
            mx = arr[i];
        }
    } 

    mx.get_data();
}