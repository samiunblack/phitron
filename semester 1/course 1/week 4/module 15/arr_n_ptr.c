#include <stdio.h>
 
int main() {
    int ar[5] = {2, 3, 4, 5, 6};
    printf("address of a[0] = %d\n", &ar[0]);
    printf("address of ar = %d\n", ar); // the name of the array points to the address of the 0 index of the array

    printf("value of a[0] = %d\n\n", *ar);

    for(int i = 0; i < 5; i++)
    {
        printf("value of a[%d] = %d\n", i, *(ar + i));
    }

    //ar[1] -> *(ar + 1)

    return 0;
}