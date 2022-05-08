#include<stdio.h>
#include<stdlib.h>

void append();
void addatbegin();
void addatafter();
void display();
void delete();
int length();

struct node
{
    int data;
    struct node *link;
};

struct node* root = NULL;
int len;

void main()
{
    int ch;
    while(1)
    {
        printf("Linked List Operations : \n");
        printf("1. Append : \n");
        printf("2. Add Node at Begning : \n");
        printf("3. Add Node after a Node : \n");
        printf("4. Display all nodes : \n");
        printf("5. Delete a node : \n");
        printf("6. Length of Linked List : \n");
        printf("7. Exit Program.\n");

        printf("Enter your choice - \n");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1 :    append();
                        break;
                        
            case 2 :    addatbegin();
                        break;

            case 3 :    addatafter();
                        break;

            case 4 :    display();
                        break;

            case 5 :    delete();
                        break;

            case 6 :    len = length();
                        printf("Linked List has %d nodes.\n",len);
                        break;

            case 7 :    exit(0);
                        break;

        }
    }
}


void append()
{
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter Node Data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
        if(root == NULL)
        {
            root = temp;
        }
        else
        {
            struct node *p;
            p = root;
            while(p->link != NULL)
            {
                p = p->link;
            }
            p->link = temp;
        }
        system("cls");
}

void addatbegin()
{
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;

        temp->link = root;
        root = temp;
}

void addatafter()
{
    struct node *temp;
    int i = 1, loc;
    printf("Enter the location after which you want insert node : ");
    scanf("%d",&loc);
        if(loc>length())
        {
            printf("Invalid Location!");
        }
        else
        {
            struct node *p = root;
            while(i<loc)
            {
                p = p->link;
                i++;
            }
            temp = (struct node *) malloc(sizeof(struct node));
            printf("Enter node data : ");
            scanf("%d",&temp->data);
            temp->link = NULL;
            temp->link = p->link;
            p->link = temp;

        }
}

void display()
{
    struct node *temp;
    temp = root;
    while(temp != NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->link;
    }
    system("pause");
    system("cls");
}

void delete()
{
    struct node *temp = root;
    int loc;
    printf("Enter a node location to delete : ");
    scanf("%d",&loc);
        if(loc>length())
        {
            printf("Invalid Location!!\n");
        }
        else if(loc==1)
        {
            root = temp->link;
            temp->link = NULL;
            free(temp);
        }
        else
        {
            struct node *p = root, *q;
            int i = 1;
            while(i<loc-1)
            {
                p = p->link;
                i++;
            }
            q = p->link;
            p->link = q->link;
            q->link = NULL;
            free(q);
        }
}

int length()
{
    struct node *temp;
    int count = 0;
    temp = root;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}