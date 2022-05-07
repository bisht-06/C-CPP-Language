#include<stdio.h>
int main() {

    int a[50],i,loc,ele,n;
    printf("Enter array size - ");
    scanf("%d",&n);
    printf("Enter %d array elements - \n",n);
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    printf("Array before element insertion - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }
    printf("\n");

    printf("Enter new element - ");
    scanf("%d",&ele);
    printf("Enter new element's location - ");
    scanf("%d",&loc);

        for(i=n-1;i>=loc;i--) {
            a[i+1] = a[i];
        }

    a[loc] = ele;

    printf("Array after element insertion - ");
        for(i=0;i<n+1;i++) {
            printf("%d\t",a[i]);
        }

    return 0;
}