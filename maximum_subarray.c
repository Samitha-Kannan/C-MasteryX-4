#include <stdio.h>

int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int i, sum = 0, max = a[0];

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];

        if(sum > max)
            max = sum;

        if(sum < 0)
            sum = 0;
    }

    printf("Maximum Sum = %d", max);

    return 0;
}