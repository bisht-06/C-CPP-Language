#include<stdio.h>
#include<conio.h>

int swap(int a, int b);
int _swap(int * a, int * b);

int main () {
        int a,b;
        printf("Enter the value of 'A' - ");
        scanf("%d",&a);
        printf("Enter the value of 'B' - ");
        scanf("%d",&b);

    swap(a,b);
    printf("Original Values - 'A' = %d, 'B' = %d\n",a,b);
    _swap(&a, &b);
    printf("Original Values - 'A' = %d, 'B' = %d\n",a,b);

    return 0;
}

int swap(int a, int b) { // call by value
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped values - 'A' = %d, 'B' = %d.\n",a,b);
}

int _swap(int * a, int * b) { // call by reference
    int t = *a;
    *a = *b;
    *b = t;
    printf("Swapped values - 'A' = %d, 'B' = %d\n",*a , *b);
}