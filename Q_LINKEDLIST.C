#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int cho,ele;	
    struct node *head,*temp,*ptr;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=0;
    head->link=NULL;
    do
    {
        printf("\nMENU\n1.enqueue\n2.Dequeue\n3.Display\nEnter choice: ");
        scanf("%d",&cho);

        switch(cho)
        {
            case 1: printf("Enter element: ");
                    scanf("%d",&ele);
                    ptr=head;
                    while(ptr->link!=NULL)
                    {
                        ptr=ptr->link;
                    }
                    temp=(struct node*)malloc(sizeof(struct node));
                    temp->link=NULL;
                    ptr->link=temp;
                    temp->data=ele;
                    break;
            case 2: if(head->link==NULL)
                    {
                        printf("\nQueue is EMPTY\n");
                    }
                    else
                    {
                        ptr=head->link;
                        temp=ptr->link;
                        head->link=temp;
                        printf("\nDELETED %d ",ptr->data);
                        free(ptr);
                    }
                    break;
            case 3: if(head->link==NULL)
                    {
                        printf("\nQueue is EMPTY\n");
                    }
                    else
                    {
                        temp=head->link;
                        while(temp!=NULL)
                        {
                            printf("%d <-",temp->data);
                            temp=temp->link;
                        }
                        printf(" NULL");
                    }
                    break;
        }
    }while(cho==1 || cho==2 || cho==3);
return 0;
}
