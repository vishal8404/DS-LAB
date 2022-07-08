#include<stdio.h>
void add(){
    int a[3][3];
    int b[3][3];
    int i,j;
    printf("Enter Elements of the First Matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter Elements of the Second Matrix :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("After addition the resultant matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }
}
void subtract(){
    int a[3][3];
    int b[3][3];
    int i,j;
    printf("Enter Elements of the First Matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter Elements of the Second Matrix :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("After subtraction the resultant matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",a[i][j]-b[i][j]);
        printf("\n");
    }
}
void mul(){
     int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    printf("Enter Elements of the First Matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter Elements of the Second Matrix :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
    printf("After Multiplication the resultant matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
}
void transpose(){
    int a[3][3];
    int i,j;
    printf("Enter Elements of the Matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Transpose is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",a[j][i]);
        printf("\n");
    }
}
void main(){
    int ch;
    printf("---------------------------------");
    printf("\nPress 0 and hit enter to exit\n");
    printf("Press 1 and hit enter to add\n");
    printf("Press 2 and hit enter to subtract\n");
    printf("Press 3 and hit enter to multiply\n");
    printf("Press 4 and hit enter to Transpose\n");
    printf("---------------------------------");
    printf("\nEnter Choice\t:\t");
    scanf("%d",&ch);
    switch(ch){
        case 0: return 0;
        case 1: 
        add();
        break;
        case 2: 
        subtract();
        break;
        case 3: 
        mul();
        break;
        case 4: 
        transpose();
        break;
        default: 
        printf("Invalid input");
        break;
    }
}