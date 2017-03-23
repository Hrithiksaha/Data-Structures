#include<stdio.h>
typedef struct node{
int data;
struct node*link;
}Node;

Node *top=NULL;
void push(int info)
{
    Node*temp;
    temp=(Node*)malloc(sizeof(Node));
    if(temp==NULL)
    {printf("overflow");
    }
    else
        temp->data=info;
        temp->link=top;
        top=temp;
}


int pop()
{
    int info;
    Node *t;
    t=top;
    info=top->data;
    top=top->link;
    t->link=NULL;
        free(t);

        return (info);

}


void disp()
{

    Node*t;
      t=top;
        printf("Top->");
        while(t)
        {
            printf("[%d]->",t->data);
            t=t->link;
        }
        printf("Null\n");
}


void main()
{
    /* Main Program */
    int opn,elem;
    do
    {

        printf("\n ### Linked List Implementation of STACK Operations ### \n\n");
        printf("\n Press 1-Push, 2-Pop, 3-Display,4-Exit\n");
        printf("\n Your option ? ");
        scanf("%d",&opn);
        switch(opn)
        {
        case 1:
            printf("\n\nRead the Element tobe pushed ?");
            scanf("%d",&elem);
            push(elem);
            break;
        case 2:
            elem=pop();
            if(elem != -1)
                printf(" Deleted Node(From Top)with the Data: %d\n",elem);
            break;
        case 3: printf("Linked List Implementation of Stack: Status:\n");
            disp(); break;
        case 4: printf("\n\n Terminating \n\n"); break;
        default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
            break;
        }
        printf("\n\n\n\n  Press a Key to Continue . . . ");
        getch();
    }while(opn != 4);
}
