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

int main()
{
    Car* land_rover = new Car("ranger rover", "black", 300, 300000, false, false);

    cout << land_rover->model << endl;
    // cout << (*land_rover).model << endl;
    
    land_rover->color = "red";

    delete land_rover;
}