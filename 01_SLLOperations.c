#include<stdio.h>
#include<stdlib.h>

void append();
void addatbegin();
void addatafter();
int length();
void delete();
void display();

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;
int len;

void main()
{
    int ch;

        while(1)
        {
            printf("\nLinked List Operations : \n\n");
            printf("01. Append : \n");
            printf("02. Add Node at Begining : \n");
            printf("03. Add a Node after a Node : \n");
            printf("04. Display all Nodes Information : \n");
            printf("05. Delete a Node : \n");
            printf("06. Length of Linked List : \n");
            printf("07. Exit.\n");
            printf("\n\n");
            printf("Enter your Choice : ");
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
                            printf("Length is %d\n",len);
                            break;

                case 7 :    exit(0);
                            break;

                default :   printf("Invalid Choice!!\n");
            }
        }
}



void append()
{
    struct node* temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            struct node* p;
            p = root;
            while(p->link != NULL)
            {
                p = p->link;
            }
            p->link = temp;
        }
}

void addatbegin()
{

}

void addatafter()
{

}

int length()
{
    int count = 0;
    struct node *temp;
    temp = root;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void delete()
{
    struct node *temp;
    int loc;
    printf("Enter Deletion node : ");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("\n Invalid Node Address.");
    }
    else if(loc==1)
    {
        temp = root;
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

void display()
{
    struct node *temp;
    temp = root;
    while(temp != NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->link;
    }
}
