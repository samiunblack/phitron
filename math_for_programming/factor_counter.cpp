#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int factors = 2;

    if(num != 1){
        for(int i = 2; i < sqrt(num); i++){
            if(num % i == 0){
                factors += 2;
            }
        }
    } 
    else {
        cout << 1 << "\n";
    }

    
    cout << factors << "\n";
}