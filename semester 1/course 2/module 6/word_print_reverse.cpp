#include <bits/stdc++.h>
using namespace std;

void print_word(stringstream& ss)
{
    string word;
    ss >> word;
    if(word.empty())
    {
        return;
    }
    
    print_word(ss);
    cout << word << " ";
    

}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print_word(ss);
}