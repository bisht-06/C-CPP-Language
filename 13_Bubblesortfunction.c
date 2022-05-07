// Bubble Sort

#include<stdio.h>

void sort(int a[] , int n) {
    int i,j,temp;

        for(i=0;i<=n-1;i++) {
            for(j=0;j<=n-1;j++) {
                if(a[j]>a[j+1]) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

    printf("Sorted array is - \n");

        for(i=0;i<n;i++) {
            printf("%d ",a[i]);
        }
}

void main() {
    int a[50],n;
    printf("Enter array limit - ");
    scanf("%d",&n);
    printf("Enter %d array elements - ",n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    sort(a,n);
}