#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        long long n, a, b, c;
        scanf("%lld %lld %lld %lld", &n, &a , &b, &c);
        long long sum = a + b + c;
        long long d = n - sum;
        
        printf("%lld\n", d);
        
    }

}
