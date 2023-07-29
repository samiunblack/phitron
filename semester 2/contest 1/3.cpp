#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        string r;
        for (char ch : line) {
            if (ch != ' ') {
                r += ch;
            }
        }
        sort(r.begin(), r.end());
        
        cout << r << endl;
    }

    return 0;
}