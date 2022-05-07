#include<stdio.h>
#include<conio.h>
int main() {
        int num,sum=0;

        printf("Enter a number - ");
        scanf("%d",&num);

            for (int i=0;i<=num;i++) {
                    sum = sum+i;
            }

        printf("Sum of all the numbers from 1 to %d is %d.\n",num,sum);


    return 0;
}