#include <stdio.h>
#include<limits.h>
int main()
{
    int a[10], i, n = 0, m =INT_MAX;
    printf("enter 10 elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
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
    printf("second smallest element : %d", n);
    return 0;
}
