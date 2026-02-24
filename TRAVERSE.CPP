#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
int data;
struct Node*next;
};
struct Node*head=NULL;

void insert_at_beginning(int data){
struct Node*newNode, *temp;
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
if(head == NULL)
{
newNode->next=newNode;
head = newNode;
}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
newNode->next=head;
temp->next=newNode;
head=newNode;
}}
void traverse()
{
struct Node*temp;
if(head == NULL)
{
printf("List is empty\n");
}
else
{
temp = head;
do
{
printf("%d",temp->data);
temp=temp->next;
}
while(temp !=head);
printf("\n");
}
}
int main()
{
insert_at_beginning(10);
insert_at_beginning(20);
insert_at_beginning(30);

traverse();
getch();
}