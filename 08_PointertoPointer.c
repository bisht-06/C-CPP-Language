// Program to print value of a variable through it's Pointer to Pointer

#include<stdio.h>

int main() {

    int i = 50;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("I value normal print - %d\n",i);
    printf("I value through Pointer to Pointer - %d\n",**pptr);


    return 0;
}