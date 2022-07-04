#include<stdio.h>
#include<stdlib.h>

# define CAP 5

void insert();
void delete();
void traverse();

int front = 0;
int rear = 0;
int queue[CAP];

void main() 
{
    int ch;
    while(1)
    {
        printf("Queue Operations : \n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 : insert();
                 break;
        
        case 2 : delete();
                 break;

        case 3 : traverse();
                 break;

        case 4 : exit(0);
                 break;

        default : printf("Invalid Choice!!");
        }

    }
}

void insert()
{
if(rear == CAP)
{
    printf("Queue is full!\n");
}
else
{
    int ele;
    printf("Enter Element Value : ");
    scanf("%d",&ele);
    queue[rear] = ele;
    rear++;
}
}

void delete()
{
if(rear == front)
{
    printf("Queue is empty. Nothing to delete!!");
}
else
{
    printf("Deleted Element : %d\n",queue[front]);
    for(int i=0;i<rear-1;i++)
    {
        queue[i] = queue[i+1];
    }
    rear--;
}
}

void traverse()
{
if(rear == front)
{
    printf("Queue is Empty. Nothing to Traverse!");
}
else
{
    int i;
    for(i=0;i<rear;i++)
    {
        printf("%d--> ",queue[i]);
    }
}
}