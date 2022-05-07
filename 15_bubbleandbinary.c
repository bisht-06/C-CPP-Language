#include<stdio.h>
#include<conio.h>
void main() {
    int a[50],i,j,k,l,f,mid,n,flag=0,temp,x;
    printf("Enter array size - ");
    scanf("%d",&n);
    printf("Enter %d array elements - ",n);
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }

    printf("Unsorted Array - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }

    printf("\n");

    // Sorting Process

        for(j=0;j<=n-1;j++) {
            for (k=0;k<=n-1;k++) {
                if (a[k] > a[k+1]) {
                    temp = a[k];
                    a[k] = a[k+1];
                    a[k+1] = temp; 
                }
            }
        }
    
    printf("Sorted Array - ");
        for(i=0;i<n;i++) {
            printf("%d\t",a[i]);
        }

    printf("\nEnter an an array element to display it's Location - ");
    scanf("%d",&x);

    f = 0;
    l = n-1;

        while(f<=l) {
            mid = (f+l)/2;
            if(x==a[mid]) {
                flag = 1;
                break;
            }
            if(x > a[mid]) {
                f = mid+1;
            }
            else
                l = mid-1;
        }

if(flag==1){
    printf("Element found at location %d\n",mid+1);
}
else
    printf("No such element exist\n");

}