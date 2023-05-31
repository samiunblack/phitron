#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
    
        void set_data(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        void get_data()
        {
            cout << name << " " << age << endl; 
        }
};


int main()
{
    Person a[5];

    for(int i = 0; i < 5; i++)
    {
        string name;
        int age;
        cin >> name >> age;

        a[i].set_data(name, age);
    }

    for(int i = 0; i < 5; i++)
    {
        a[i].get_data();
    }
}