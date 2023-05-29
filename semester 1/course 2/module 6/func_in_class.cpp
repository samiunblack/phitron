#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string n, int a)
        {
            name = n;
            age = a;
        }

        void say_name()
        {
            cout << name << " ";
        }
};

int main()
{
    Person* black = new Person("Black", 17);
    black->say_name();
    cout << black->age << endl;
}