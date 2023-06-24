#include <bits/stdc++.h>
using namespace std;

class Letter
{
    public:
        char c;
        int count;

        void set_value(char c, int count)
        {
            this->c = c;
            this->count = count;
        }
};

bool cmp(Letter i, Letter j)
{
    if(i.count > j.count) return true;
    return false;
}

int main()
{
    string s;

    Letter arr[26];

    for(int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        arr[i].set_value(c, 0);
    }

    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a'].count++;
    }

    sort(arr, arr + 26, cmp);

    for(int i = 0; i < 26; i++)
    {
        while(arr[i].count > 0)
        {
            cout << arr[i].c;
            arr[i].count--;
        }
    }
}