#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Competitive Programming is life";
    string s_not = " not all the time";
    
    //s += s_not;
    s.append(s_not);
    cout << s << endl;

    s.push_back('!'); // s += "!";
    cout << s << endl;

    s.pop_back();
    cout << s << endl; //deletes last char

    s.assign("Competitive programming is fun."); // s = ...
    cout << s << endl;

    s.erase(11, 1); // s.erase(start index, how many character to delete)
    cout << s << endl;

    s.replace(11, 0, " ");

    s.insert(s.size(), ":D");
    cout << s << endl;
}