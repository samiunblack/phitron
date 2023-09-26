#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        int jersey_no;
        string country;

        Cricketer(int j_n, string c)
        {
            jersey_no = j_n;
            country = c;
        }
};


int main()
{
    Cricketer* dhoni = new Cricketer(34, "India");
    Cricketer *kohli = new Cricketer(*dhoni);

    delete dhoni;
    cout << kohli->jersey_no << " " << kohli->country;
}