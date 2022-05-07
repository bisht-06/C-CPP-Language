/* Question - Write function to calculate sum, product and average of 2 numbers.
print those values in main() */

#include<stdio.h>
#include<conio.h>

void work(int a, int b, int * prod, int * sum, int * avg);

int main() {
        int a,b;
        int prod,sum,avg;

        printf("Enter the value of A - ");
        scanf("%d",&a);
        printf("Enter the value of B - ");
        scanf("%d",&b);

        work(a, b, &prod, &sum, &avg);
        printf("prod is = %d, sum is = %d, avg is = %d\n",prod,sum,avg);

    return 0;
}


void work(int a, int b, int * prod, int * sum, int * avg) {
    *prod = a*b;
    *sum = a+b;
    *avg = (a+b)/2;
}