#include <bits/stdc++.h>
using namespace std;

int binary_to_decimal(string binary){
    int decimal = 0;
    int j = 0;

    for(int i = binary.length() - 1; i >= 0; i--){
        int binary_digit = binary[i] - '0';
        decimal += binary_digit * pow(2, j);
        j++;
    }

    return decimal;
}

int decimal_to_binary(int decimal){
    int binary = 0;
    int reminder = 0;
    int i = 0;

    while(decimal != 0){
        reminder = decimal % 2;
        decimal = decimal / 2;
        
        binary += reminder * pow(10, i);
        i++;
    }

    return binary;
}


int main(){
    string binary;
    int decimal;
    cin >> binary;
    cin >> decimal;

    cout << binary_to_decimal(binary) << "\n";
    cout << decimal_to_binary(decimal) << "\n";
}