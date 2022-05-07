#include<stdio.h>
#include<conio.h>

int fact(int n);

int main() {
    
    int n;
        printf("Enter a number to find factorial - ");
        scanf("%d",&n);

        printf("Factorial of the %d is %d.\n",n,fact(n));


    return 0;
}

int fact(int n) {
    if (n==1) {
        return 1;
    }
    int facnm1 = fact(n-1);
    int fac = facnm1 * n;

    return fac;
}