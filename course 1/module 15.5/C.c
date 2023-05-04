#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int is_odd(int n)
{
    if(n % 2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_binary_palindrome(int n)
{
    if (n == 0) {
        printf("0");
        return 1;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;n > 0; ){
      binaryNum[i++] = (n % 2);
      n /= 2;
   }

    int l = 0, r = i - 1;

    int flag = 1;
    while(l < r)
    {
        if(binaryNum[l] != binaryNum[r])
        {
            flag = 0;
        }
        l++;
        r--;
    }

    return flag;
}

int main() {
    int n;
    scanf("%d", &n);

    if(is_odd(n) == 1 && is_binary_palindrome(n) == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
