#include<stdio.h>
void main() {
    int a[3][3],b[3][3],i,j;

        printf("Enter 9 elements for Matrix - ");
            for(i=0;i<3;i++) {
                for (j=0;j<3;j++) {
                    scanf("%d",&a[i][j]);
                }
            }
        printf("Matrix before transpose - \n");
            for(i=0;i<3;i++) {
                for(j=0;j<3;j++) {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }

//Transpose Operation

            for(i=0;i<3;i++) {
                for(j=0;j<3;j++) {
                    b[i][j] = a[j][i];
                }
            }

            printf("Tranpose of the Matrix is - \n");
                for (i=0;i<3;i++) {
                    for(j=0;j<3;j++) {
                        printf("%d\t",b[i][j]);
                    }
                    printf("\n");
                }
}