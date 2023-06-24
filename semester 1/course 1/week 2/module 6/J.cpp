#include <stdbool.h>
#include <stdio.h>
 
// below is the function to check
// if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime so return false.
    if (n == 1 || n == 0)
        return false;
 
    // execute a loop from 2 to square root of n.
    for (int i = 2; i * i <= n; i++) {
       
        // if the number is divisible by i, then n is not a
        // prime number. otherwise, n is prime number.
        if (n % i == 0)
            return false;
    }
    return true;
}
 
// Driver code
int main()
{
    int N;
    scanf("%d", &N);
 
    // check for every number from 1 to N
    for (int i = 1; i <= N; i++) {
       
        // check if current number is prime
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}