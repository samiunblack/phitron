#include <stdio.h>
 
int main() {
    long long eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    //find lowest
    //take one mouth one eye one body till mouth
    //take two eye one body till available

    long long total = 0;

    if(eye == 0 || body == 0)
    {
        printf("0");
    }
    else if(eye == 1 || body == 1)
    {
        printf("1");
    }

    else {
        long long body_after = body - mouth;
        long long eye_after = eye - mouth;

        if(body_after < 0 || eye_after < 0)
        {
            long long min = body;
            if(eye < body)
            {
                min = eye;
            }

            total += min;

            printf("%lld", total);
        }
        else {
            total += mouth;
            eye_after /= 2;
            if(eye_after <= body_after)
            {
                total += eye_after;
            }
            else {
                total += body_after;
            }

            printf("%lld", total);
        }
    }

    return 0;
}