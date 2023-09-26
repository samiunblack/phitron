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

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i].marks > arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        arr[i].get_data();
    }
}