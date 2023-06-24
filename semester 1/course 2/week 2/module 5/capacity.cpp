#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hey Beautiful";

    //returns size of the string    
    cout << s.size() << endl;

    //returns the capacity of the current string
    cout << s.capacity() << endl;

    //returns 1 if the string is empty
    cout << s.empty() << endl;

    //s.clear -> clears the string

    //resizes the string
    s.resize(3);
    cout << s << endl;

    s.resize(5, 'X');
    cout << s << endl;
}