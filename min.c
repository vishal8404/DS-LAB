#include<stdio.h>
#include<limits.h>
void main()
{
    int arr[10],min=INT_MAX;
    int i;
    printf("Enter 10 numbers :\t");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(min>arr[i])
        min=arr[i];
    }
    printf("%d is the smallest number in the array.",min);
}