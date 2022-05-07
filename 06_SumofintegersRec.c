#include<stdio.h>
#include<conio.h>

int sum(int n);

int main() {
    int n;
    printf("Enter a number - ");
    scanf("%d",&n);

    printf("Sum of all numbers from 0 to %d is %d.\n",n,sum(n));


    return 0;
}

int sum(int n) {
    if(n==1) {
        return 1;
    }
    int sumnm1 = sum(n-1);
    int fsum = sumnm1 + n;
    return fsum;
}
