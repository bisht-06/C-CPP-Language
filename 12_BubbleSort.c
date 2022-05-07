#include<stdio.h>
#include<conio.h>
void main() {

    int a[200],temp,n,i,j;
    printf("Enter array limit - ");
    scanf("%d",&n);

    printf("Enter %d array elements - \n",n);
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    printf("Array before sorting - \n");
        for(i=0;i<n;i++) {
            printf("%d  ",a[i]);
        }
    printf("\n");
for(j=0;j<=n-1;j++) {
    for(int k = 0;k<=n-1;k++) {
        if(a[k]>a[k+1]) {
            temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp;
        }
    }
}

printf("Array after sorting - \n");

    for (i=0;i<n;i++) {
        printf("%d  ",a[i]);
    }



}