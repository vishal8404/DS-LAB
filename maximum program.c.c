/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
   
   int main()
{
    int arr[]={35,13,9,85,76};
    
   int length = sizeof(arr[0]);
   int max = arr[0];
   
   for(int i = 0;i<length;i++){
       if (arr[i]>max)
       max = arr[i];
       
   }
    printf("largest element in given array%d\n",max);
}

 
