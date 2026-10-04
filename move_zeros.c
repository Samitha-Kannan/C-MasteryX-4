#include <stdio.h>

int main()
{
    int a[] = {0, 1, 0, 3, 12};
    int n = 5;
    int i, j = 0, temp;

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Output: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}