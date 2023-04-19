#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin >> s;

    int freq[26] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}