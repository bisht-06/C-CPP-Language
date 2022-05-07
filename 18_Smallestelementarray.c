#include<stdio.h>
void main() {
    int a[50],i,small,n;
    printf("Enter array limit - ");
    scanf("%d",&n);
    printf("Enter %d elements - ",n);
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    printf("Given array is - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }

    printf("\n");

//Logic

    small = a[0];

    for(i=1;i<n;i++) {
        if(a[i]<small) {
            small = a[i];
        }
    }

    printf("Smallest element of the array is %d\n",small);
}