#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    if(num == 0){
        cout << "zero" << "\n";
    }
    else if(num % 2 == 0){
        cout << "even" << "\n";
    }
    else {
        cout << "odd" << "\n";
    }
}