#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;

        void set_data(string name, int cls, char s, int id)
        {
            this->name = name;
            this->cls = cls;
            this->s = s;
            this->id = id;
        }

        void get_data()
        {
            cout << name << " " << cls << " " << s << " " << id << endl;
        }
};


int main()
{
    int n;
    cin >> n;
    Student a[n];


    for(int i = 0; i < n; i++)
    {
        string name;
        int cls, id;
        char c;

        cin >> name >> cls >> c >> id;

        a[i].set_data(name, cls, c, id);
    }

    int l = 0;
    int r = n - 1;
    
    while(l < r)
    {
        swap(a[l].id, a[r].id);
        l++;
        r--;
    }

    for(int i = 0; i < n; i++)
    {
        a[i].get_data();
    }
}