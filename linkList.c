#include<stdio.h>
#include<malloc.h>
void main()
{
    struct node{
        int val;
        struct node *next;
    };
    struct node *head,*tail,*new;
    
    int n,i;
    printf("Enter number of node : ");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    tail=head;
    tail->next=NULL;
    printf("Enter value : ");
    scanf("%d",&tail->val);
    for(i=1;i<n;i++)
    {
        tail->next=(struct node*)malloc(sizeof(struct node));
        tail=tail->next;
        scanf("%d",&tail->val);
    }
    tail->next=NULL;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
    


}