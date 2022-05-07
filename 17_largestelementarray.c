#include<stdio.h>
void main() {
    int a[50],i,large,n;
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
    
// Logic

        large = a[0];

    for(i=1;i<n;i++) {
        if(a[i] > large) {
            large = a[i];
        }
    }

    printf("Largest element in the given array is - %d\n",large);
}