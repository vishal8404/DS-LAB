#include <stdio.h>
#include<limits.h>
void main()
{
    int a[10], i, n = 0, m = INT_MIN;
    printf("enter 10 elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (m < a[i])
        {
            n = m;
            m = a[i];
        }
        else if (n < a[i])
            n = a[i];
    }
    printf("second largest element : %d\n", n);
}