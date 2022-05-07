#include<stdio.h>
#include<conio.h>

int power(int n, int rt);

int main() {
            int n, rt;
        printf("Enter any number - ");
        scanf("%d",&n);

        printf("Enter power - ");
        scanf("%d",&rt);

        printf("%d raised to %d is %d.\n",n,rt,power(n,rt));
    return 0;
}

int power(int n, int rt) {
        int pow;
        pow = n*rt;
        return pow;
}
