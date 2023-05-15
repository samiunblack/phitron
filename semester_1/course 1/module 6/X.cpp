#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int num;
        cin >> num;

        int n = (int)(log2(num));
    
        string binary = bitset<64>(num).to_string().substr(64 - n - 1);

        string count = "";

        for(int i = 0; i < binary.size(); i++)
        {
            if(binary[i] == '1')
            {
                count.push_back('1');   
            }
        }

        int output = stoi(count, 0, 2);

        cout << output << "\n";
    }
}