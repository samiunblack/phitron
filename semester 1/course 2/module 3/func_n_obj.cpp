#include <bits/stdc++.h>
using namespace std;

class Car
{
    public:
        string model;
        string color;
        int speed;
        int price;
        bool vertical_door;
        bool sports_car;

        Car(string md, string clr, int spd, int prc, int vt_door, int sp_car)
        {
            model = md;
            color = clr;
            speed = spd;
            price = prc;
            vertical_door = vt_door;
            sports_car = sp_car;
        }
};

Car fun()
{
    Car lambo("aventador", "grey", 350, 700000, true, true);
    return lambo;
}

int main()
{
    Car lambo = fun();
    cout << lambo.model << endl;
}