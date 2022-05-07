#include<stdio.h>
#include<conio.h>
int main() {

        int fact=1,i,num;
        printf("Enter a number to find factorial - ");
        scanf("%d",&num);

            for(i=1;i<=num;i++) {
                fact = fact * i;
            }
        printf("Factorial of %d is %d.\n",num,fact);

    return 0;
}