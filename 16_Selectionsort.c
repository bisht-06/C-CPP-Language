#include<stdio.h>
#include<conio.h>
void main() {
    int a[50],i,j,n,k,min,temp;
    printf("Enter array range - ");
    scanf("%d",&n);
    printf("Enter %d array elements - \n",n);
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    printf("Array before Sorting - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }

    for(i=0;i<n-1;i++) {
        min = i;
            for(j=i+1;j<n;j++) {
                if(a[j] > a[min]) {
                    min = j;
                }
            }
        if (min != i) {
            temp = min;
            min = i;
            i = temp;
        }
    }

    printf("Array after sorting - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }
}