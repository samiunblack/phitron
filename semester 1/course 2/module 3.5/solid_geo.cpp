#include <bits/stdc++.h>
using namespace std;

class Solid{
    
    public:
        string name;
        int height;
        int length;
        int breadth;
        int radius;

        Solid(string n, int h, int l, int b, int r)
        {
            name = n;
            height = h;
            length = l;
            breadth = b;
            radius = r;
        }
};

void get_area(Solid* shape)
{
    double area = 0;
    if(shape->name == "parallelopipe")
    {
        area = 2.0 * ((shape->length * shape->height) + 
        (shape->length * shape->breadth) + 
        (shape->breadth * shape->height));
    }

    else if(shape->name == "cube")
    {
        area = 6.0 * (shape->length * shape->length);
    }

    else if(shape->name == "cylinder")
    {
        area = 2 * 3.1416 * shape->radius * (shape->radius + shape->height);
    }

    else if(shape->name == "cone")
    {
        double slant_height = sqrt((shape->radius * shape->radius) + (shape->height * shape->height));
        area = 3.1416 * shape->radius * (shape->radius * slant_height);
    }

    else if(shape->name == "sphere")
    {
        area = (4/3) * 3.1416 * pow(shape->radius, 3);
    }

    cout << area << endl;
}

int get_volume()
{
    return 0;
}

int main()
{
    int h, l, b, r;
    cin >> h >> l >> b >> r;
    Solid* parallelopipe = new Solid("parallelopipe", h, l, b, r);
    Solid* cube = new Solid("cube", h, l, b, r);
    Solid* cylinder = new Solid("cylinder", h, l, b, r);
    Solid* cone = new Solid("cone", h, l, b, r);
    Solid* sphere = new Solid("sphere", h, l, b, r);

    get_area(parallelopipe);
    get_area(cube);
    get_area(cylinder);
    get_area(cone);
    get_area(sphere);
}