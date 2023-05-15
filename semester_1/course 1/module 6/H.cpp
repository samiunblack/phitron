#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
// Driver Program to test above function
int main()
{
    int n;
    cin >> n;
    isPrime(n) ? cout << " YES" : cout << " NO";
    return 0;
}