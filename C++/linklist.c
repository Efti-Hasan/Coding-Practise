#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head , *newnode ,*temp;
    head=NULL;
    int choice=1;
    while(choice!=0)
    {
        newnode=(struct node* )malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newnode->data);

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0,1) ? : ");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Entered given elements are : ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}