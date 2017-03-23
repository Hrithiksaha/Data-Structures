#include<iostream>
#include<stdio.h>
using namespace std;
struct node//node
{
    int data;
    struct node* next;
}*start=NULL;
void display()
{
    struct node* ptr;
    cout<<"The linked list is:";
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"-->";
        ptr=ptr->next;
    }
cout<<ptr->data<<"-->";
    cout<<"NULL\n";
}
void insert_start()
{
    struct node* newnode,*ptr;
    newnode=new node;
    cout<<"Enter the data";
    cin>>newnode->data;
    ptr=start;
    newnode->next=ptr;
    start=newnode;
}
void insert_mid()
{
    struct node* newnode,*ptr;
    int value;
    newnode=new node;
    cout<<"Enter the data";
    cin>>newnode->data;
    cout<<"Enter the data after which the node has to be placed";
    cin>>value;
    ptr=start;
    while(ptr->data!=value)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void insert_end()
{
   struct node *ptr,*newnode;
   newnode=new node;
    cout<<"Enter the data";
    cin>>newnode->data;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=NULL;
}
void delete_start()
{
    struct node* newnode,*ptr;
    ptr=start;
    start=ptr->next;
}
void delete_end()
{
    struct node* temp,*ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
temp->next=NULL;
}
void delete_mid()//codeblocks crashing
{
    int value;
    cout<<"Enter the value to be deleted";
    cin>>value;
    struct node* temp,*ptr;
    while(ptr->data!=value)
    {
       temp=ptr;
        ptr=ptr->next;
    }
    temp->next=ptr->next;

}
int main()
{
    cout<<"Welcome\n";
    char ch,ch2;
    do{
    cout<<"Press 1 to display\n";
    cout<<"Press 2 to insert at the start\n";
    cout<<"Press 3 to insert at the end\n";
    cout<<"Press 4  to insert at the middle\n";
    cout<<"Press 5  to delete at the start\n";
    cout<<"Press 6 to delete at the end\n";
    cout<<"Press 7 to delete at the middle\n";
    cin>>ch;
    switch(ch)
    {
    case '1':
        display();
        break;
    case '2':
        insert_start();
        break;
    case '3':
        insert_end;
        break;
    case '4':
        insert_mid();
        break;
    case '5':
        delete_start();
        break;
    case '6':
        delete_end();
        break;
    case '7':
        delete_mid();
        break;

}
cout<<"Press 'n' to exit\n";
    }while(ch2!='n');
return 0;
}


void create()
{
struct node * newnode,*ptr;
newnode=new node;
if(start=NULL)
{
newnode->next=NULL;
start=newnode;
}
else
ptr=start;
while(ptr->next!=NULL)
{
ptr->next=newnode;
newnode->next=NULL;
}}

