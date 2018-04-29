#include <stdio.h>

int main()
{
    int i, j, k;
    int arr[3];
    int sum_even;
    int sum_odd;

    printf("Please enter first integer: ");
    scanf("%d", &i);
    ++arr[i];
    printf("Please enter the second integer: ");
    scanf("%d", &j);
    ++arr[j];
    printf("Please eneter the third integer: ");
    scanf("%d", &k);
    ++arr[k];
    printf("The integer input is: %d, %d, %d. \n", i, j, k);


    for (int h = 0; h < 3; h++) {
        printf("%d ", arr[h]);
        /*if (arr[h] % 2 == 0) {
            printf("%d", arr[h]);
            sum_even += arr[h];
        }
        else sum_odd += arr[h];*/
    }

    printf("The even numbers sum is: %d \n", sum_even);
    printf("The odd numbers sum is: %d \n", sum_odd);
}