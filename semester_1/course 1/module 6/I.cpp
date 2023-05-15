#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int half = n.size()/2;
    int left = 0;
    int right = n.size() - 1;

    bool pal = true;

    while(left < half)
    {
        if(n[left] != n[right])
        {
            pal = false;
            break;
        }
        else if(n[left] == n[right]) {
            left++;
            right--;    
        }
    }

    int end = n.size() - 1;
    string s;

    while(end >= 0)
    {

        s.push_back(n[end]);
        end--;
    }

    int k = stoi(s);
    cout << k;

    cout << "\n";

    if(pal)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}