#include<stdio.h>
#include<conio.h>
int main() {

    int i,f,l,mid,a[50],flag=0,n,x;

        printf("Enter array limit - ");
        scanf("%d",&n);
        printf("Enter %d array elements in ascending order - ",n);

            for(i=0;i<n;i++) {
                scanf("%d",&a[i]);
            }

        printf("Enter an array element to find - ");
        scanf("%d",&x);

        f=0;
        l=n-1;

        while(f<=l) {
            mid = (f+l)/2;
            if(x==a[mid]) {
                flag=1;
                break;
            }
            if(x>a[mid]) {
                f = mid+1;
            }
            else
                l =mid -1;
        }

if(flag==1) {
    printf("Element found at location %d.\n",mid+1);
}
else
    printf("No such element! \n");

    return 0;
}