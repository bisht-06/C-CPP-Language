#include<stdio.h>
#include<stdlib.h>
# define CAP 5

void push(int ele);
int stackoverflow();
int pop();
int stackunderflow();
void peek();
void traverse();

int top = -1;
int stack[CAP];

void main()
{
    int ch,ele;
    while(1)
    {
        printf("Stack Operations : \n");
        printf("1. Push : \n");
        printf("2. Pop : \n");
        printf("3. Peek : \n");
        printf("4. Traverse : \n");
        printf("5. Exit : \n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1 :    printf("Enter Element : ");
                        scanf("%d",&ele);
                        push(ele);
                        break;

            case 2 :    ele = pop();
                        if (ele == 0)
                        {
                            printf("Stack Underflow!!");
                        }
                        else
                        {
                             printf("Popped item : %d\n",ele);
                        }
                        break;

            case 3 : peek();
                     break;

            case 4 : traverse(0);
                     break;

            case 5 : exit(0);
                    break;

            default : printf("Invalid Choice !!\n");
        }
    }
}



void push(int ele)
{
    if(stackoverflow())
    {
        printf("Stack overflow!");
    }
    else
    {
        top++;
        stack[top] = ele;
    }
}

int stackoverflow()
{
    if(top == CAP-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if (stackunderflow())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}

int stackunderflow()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek()
{
    if(stackunderflow())
    {
        printf("Stack Underflow!!");
    }
    else
    {
        printf("Last inserted element is : %d\n",stack[top]);
    }
}

void traverse()
{
    if(stackunderflow())
    {
        printf("Stack underflow!!\n");
    }
    else
    {
        printf("Stack Elements are : ");
        for(int i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
    }
        printf("\n");
    
}