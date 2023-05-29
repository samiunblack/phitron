#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string name, int age)
        {
            this->name = name; // this keyword means the class's attributes
            this->age = age;
        }

        void say_name()
        {
            cout << this->name << " ";
        }
};

int main()
{
    Person* black = new Person("Black", 17);
    black->say_name();
    cout << black->age << endl;
}