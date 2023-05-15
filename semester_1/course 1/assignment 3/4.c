#include <stdio.h>

// has return + parameter
int add(int a, int b)
{
    return a + b;
}

// has return + no parameter
int arr_sum(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum+= arr[i];
    }

    return sum;
}

// no return + parameter
void substract(int a, int b)
{
    printf("%d\n", a - b);
}

// no return + no parameter
void selection_sort(void)
{
    int arr[5] = {5, 2, 3, 7, 8};

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    printf("%d\n", add(20, 30));
    printf("%d\n", arr_sum());
    substract(40, 20);
    selection_sort();
    return 0;
}