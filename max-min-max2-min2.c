#include <stdio.h>
void main()
{
    int a[10], i, n = 0, m = 0;
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
    printf(" largest element : %d\n", m);
    printf("second largest element : %d\n", n);
    for (i = 0; i < 5; i++)
    {
        if (m > a[i])
        {
            n = m;
            m = a[i];
        }
        else if (n > a[i])
            n = a[i];
    }
    printf(" smallest element : %d\n", m);
    printf("second smallest element : %d", n);
}
