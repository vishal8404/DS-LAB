#include <stdio.h>
#define size 5
int arr[size];
void insert()
{
    int i;
    printf("\nEnter elements : ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}
void delete (int p)
{
    int k;
    printf("\nElement at %d is deleted successfully....\n", p);
    for (k = p; k <= sizeof(arr) / 2; k++)
    {
        arr[p - 1] = arr[p];
    }
    arr[(sizeof(arr) / 2) - 1] = NULL;
}
void update(int p, int q)
{
    arr[p] = q;
}
void display()
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void main()
{
    int ch, x, y;
    while (1)
    {
        printf("Press 1 to insert an  element\t:\n");
        printf("Press 2 to delete an element\t:\n");
        printf("Press 3 to update element\t:\n");
        printf("Press 4 to Display all the element\t:\n");
        printf("Press 0 to exit element\t:\n");
        printf("Enter Choice\t:\t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            insert();
            break;
        case 2:
            if (sizeof(arr) / 2 == 0)
                printf("Array is Empty.../nNo elements available to delete\n");
            else
            {
                printf("Enter Index : ");
                scanf("%d", &x);
                delete (x);
            }
            break;
        case 3:
            printf("Enter Index : ");
            scanf("%d", &x);
            printf("Enter New value : ");
            scanf("%d", &y);
            update(x, y);
            break;
        case 4:
            display();
            break;
        }
    }
}